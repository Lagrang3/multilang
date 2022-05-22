#pragma once

#include <sys/types.h>

#ifdef __cplusplus
#include <graph/digraph.hpp>
extern "C" {
using graph::digraph;
using graph::vertex_id_t;
#else
struct digraph;
typedef size_t vertex_id_t;
#endif

typedef struct digraph digraph;

struct digraph* digraph_new();

void digraph_free(digraph* g);

size_t digraph_size(const digraph* g);

void digraph_add_vertex(digraph* g, vertex_id_t i);

#ifdef __cplusplus
}
#endif
