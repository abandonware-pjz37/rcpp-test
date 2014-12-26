#include <Rcpp.h>

Rcpp::List foo_cpp_function() {
  return Rcpp::List(0);
}

RCPP_MODULE(foomodule) {
   Rcpp::function("foo_r_function", &foo_cpp_function) ;
}
