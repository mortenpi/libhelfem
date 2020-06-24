project('libhelfem', 'cpp')
inc = include_directories('include')
libhelfem_so = shared_library('libhelfem', 'src/helfem.cc', include_directories : inc)
libhelfem = declare_dependency(link_with : libhelfem_so, include_directories : inc)

#runtests = executable('runtests', 'test/runtests.cc', link_with : libhelfem)
runtests = executable('runtests', 'test/runtests.cc', link_with : libhelfem_so, include_directories : inc)
test('test', runtests)
