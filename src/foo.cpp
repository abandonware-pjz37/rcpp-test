#include <Rcpp.h>

Rcpp::List foo() {
}

RCPP_MODULE(foo) {
   Rcpp::function("foo", &foo) ;
}
