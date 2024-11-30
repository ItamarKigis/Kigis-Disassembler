cmake_minimum_required(VERSION 3.16.3)

project(disassembler)
set(CMAKE_CXX_COMPILER /usr/bin/g++)

include_directories(headers)
add_compile_options(-g -Wall)
add_executable (
    dis
    source/main.cpp
)
# target_link_libraries ( sitk_example ${SimpleITK_LIBRARIES} )

