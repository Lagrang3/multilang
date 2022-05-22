#include "graph/digraph.h"
#include <stdio.h>

int main()
{
    digraph* g = digraph_new();
    digraph_add_vertex(g,3);
    digraph_add_vertex(g,7);
    digraph_add_vertex(g,11000);
    digraph_add_vertex(g,0);
    digraph_add_vertex(g,3);
    printf("g.size() = %ld\n",digraph_size(g));
    digraph_free(g);
    return 0;
}

