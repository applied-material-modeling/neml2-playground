cmake_minimum_required(VERSION 3.28)
project(training LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(training playground/main.cxx)
add_subdirectory(neml2)
target_link_libraries(training neml2)
