cmake_minimum_required(VERSION 2.8.12)
project(RcppTest)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

find_package(R REQUIRED)
message("R libraries: ${R_LIBRARIES}")
message("R include dirs: ${R_INCLUDE_DIR} ${Rcpp_INCLUDE_DIR}")

add_library(foopack SHARED src/foo.cpp)
include_directories(foopack ${R_INCLUDE_DIR} ${Rcpp_INCLUDE_DIR})
target_link_libraries(foopack ${R_LIBRARIES})

install(TARGETS foopack DESTINATION lib)
