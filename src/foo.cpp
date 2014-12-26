#include <Rcpp.h>

Rcpp::List foo() {
}

RCPP_MODULE(foomodule) {
   Rcpp::function("foo", &foo) ;
}
