project('Multilang library example',['c','cpp'])

subdir('include')
subdir('src')

pkg=import('pkgconfig')
python3=dependency('python3')
boost=dependency('boost',modules: ['python3.7'])

libgraph = library('graph',graph_headers+graph_src,
    include_directories: graph_inc,
    install: true)

install_headers(graph_headers,subdir: 'graph')

pkg.generate(libgraph, description: 'graph library')

libgraph_dep = declare_dependency(include_directories: graph_inc,
    link_with: libgraph)

subdir('pygraph')

subdir('examples')
