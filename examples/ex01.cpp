#include "graph/digraph.hpp"
#include <iostream>

int main()
{
    graph::digraph g;
    g.add_vertex(3);
    g.add_vertex(7);
    g.add_vertex(11000);
    g.add_vertex(0);
    g.add_vertex(3);
    std::cout << "g.size = " << g.size() << '\n';
    return 0;
}
