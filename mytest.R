library('foopack', lib.loc='_library')

x <- .C('foo_cpp_function', as.integer(3), as.integer(15))
