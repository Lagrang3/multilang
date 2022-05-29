#include <boost/python.hpp>
#include <graph/digraph.hpp>

BOOST_PYTHON_MODULE(pygraph)
{
    using namespace boost::python;
    
    class_<graph::digraph>("digraph",init<>())
        .def("size",&graph::digraph::size)
        .def("add_vertex",&graph::digraph::add_vertex)
    ;
}
