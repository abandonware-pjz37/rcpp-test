all:
	/usr/bin/c++ -fPIC -I/usr/share/R/include -I/usr/lib/R/site-library/Rcpp/include -o foo.cpp.o -c foo.cpp
	/usr/bin/c++ -fPIC -shared -Wl,-soname,foopack.so -o foopack.so foo.cpp.o -L/usr/lib/R/lib -lR -lreadline -lblas -llapack -Wl,-rpath,/usr/lib/R/lib
