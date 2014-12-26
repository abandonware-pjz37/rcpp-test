#include <Rcpp.h>

Rcpp::List foo_cpp_function() {
}

RCPP_MODULE(foomodule) {
   Rcpp::function("foo_r_function", &foo_cpp_function) ;
}
