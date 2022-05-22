#include <graph/digraph.hpp>
#include <iostream>

void graph::digraph::add_vertex(vertex_id_t i)
{
    std::cout << "adding vertex " << i << '\n';
    vertex_list.push_back(i);
}
