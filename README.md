### Rcpp usage example

| Linux                             | Mac                               |
|-----------------------------------|-----------------------------------|
| [![Build Status][linux]][master]  | [![Build Status][macosx]][master] |

[macosx]: https://travis-ci.org/forexample/rcpp-test.svg?branch=travis-macosx
[linux]: https://travis-ci.org/forexample/rcpp-test.svg?branch=master
[master]: https://travis-ci.org/forexample/rcpp-test

#### Ubuntu

* Installing dependencies
```bash
> sudo apt-get -y install r-base
> sudo apt-get -y install r-cran-rcpp
```

* Run test
```bash
> ./run.sh
```

### Internals

C++ function name:
* `foo_cpp_function`
* file `src/foo.cpp`

R function name:
* `foo_r_function`
* file `src/foo.cpp` (definition)
* file `mytest.R` (usage)

Module name:
* `foomodule`
* file `src/foo.cpp` (definition)
* file `R/foo.R` (`loadModule`, usage)

Package name:
* `foopack`
* file `DESCRIPTION` (package name, result archive name, `foopack_0.0.1.tar.gz`)
* file `src/Makefile` (shared library name, `foopack.so`)
* file `NAMESPACE` (`useDynLib`, usage)
* file `mytest.R` (`library`, usage)
