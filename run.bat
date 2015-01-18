del foopack_0.0.1.tar.gz mytest.Rout
rmdir foopack.Rcheck _library /S /Q

mkdir _library

R CMD build .
R CMD INSTALL -l _library foopack_0.0.1.tar.gz
R CMD BATCH mytest.R || echo "mytest failed"

echo "============ mytest.Rout ==============="
type mytest.Rout
