cmake_minimum_required(VERSION 3.15)

project(CUGTA)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(${PROJECT_SOURCE_DIR}/thirdparty/googletest-1.14.0)
add_subdirectory(${PROJECT_SOURCE_DIR}/src)
add_subdirectory(${PROJECT_SOURCE_DIR}/test)

