#pragma once

#include <vector>
#include <cstdint>
#include <iostream>

namespace graph
{
    typedef std::uint64_t vertex_id_t;

    class digraph
    {
        std::vector< vertex_id_t > vertex_list;
        
        public:
        digraph()
        {
            std::cout << "digraph()" << '\n';
        }
        
        void add_vertex(vertex_id_t i);
        
        auto size() const
        {
            std::cout << "size ()" << '\n';
            return vertex_list.size();
        }
        
        ~digraph()
        {
            std::cout << "~digraph()" << '\n';
        }
    };
}
