cmake_minimum_required(VERSION 3.26)
project(playground LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(playground main.cxx)
set(NEML2_WORK_DISPATCHER OFF)
set(NEML2_TESTS OFF)
add_subdirectory(neml2)
target_link_libraries(playground neml2)
target_compile_definitions(playground PRIVATE _GLIBCXX_USE_CXX11_ABI=${GLIBCXX_USE_CXX11_ABI})
