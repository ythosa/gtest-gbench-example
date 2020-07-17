project(factoriallib)

set(HEADER_FILES falgo.h)
set(SOURCE_FILES falgo.cpp)

add_library(factoriallib_lib ${SOURCE_FILES} ${HEADER_FILES})
