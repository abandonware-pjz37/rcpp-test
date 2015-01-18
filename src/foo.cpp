#include <iostream>
#include <foopack_export.h>

extern "C" {

FOOPACK_EXPORT void foo_cpp_function(int* a, int* b) {
  std::cout << "Hello a:" << *a << " b:" << *b << std::endl;
}

} // extern "C"
