import ctypes.util
import ctypes

libgraph_found = ctypes.util.find_library("graph")

if not libgraph_found:
    raise Exception('libgraph not found in LD_LIBRARY_PATH')

libgraph = ctypes.cdll.LoadLibrary(libgraph_found)

libgraph.digraph_new.restype = ctypes.c_void_p

libgraph.digraph_size.restype = ctypes.c_int
libgraph.digraph_size.argtypes = [ctypes.c_void_p]

libgraph.digraph_free.argtypes = [ctypes.c_void_p]

libgraph.digraph_add_vertex.argtypes = [ctypes.c_void_p,ctypes.c_int]

class digraph(object):
    def __init__(self):
        self.obj = ctypes.c_void_p(libgraph.digraph_new())

    def add_vertex(self,v: int):
        libgraph.digraph_add_vertex(self.obj,ctypes.c_int(v))
    
    def __del__(self):
        libgraph.digraph_free(self.obj)
        
    def size(self):
        return libgraph.digraph_size(self.obj)
