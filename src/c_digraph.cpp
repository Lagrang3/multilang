#include <graph/digraph.hpp>
#include <graph/digraph.h>

extern "C" {

digraph* digraph_new()
{
    return new digraph();
}

void digraph_free(digraph* g)
{
    delete g;
}

size_t digraph_size(const digraph* g)
{
    return g->size();
}

void digraph_add_vertex(digraph* g, vertex_id_t i)
{
    g->add_vertex(i);
}

}
