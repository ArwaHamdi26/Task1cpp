
cmake_minimum_required(VERSION 3.12)

project(myconsole LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(myconsole STATIC
    src/myconsole.cpp
)

target_include_directories(myconsole
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(example
    examples/main.cpp
)

# Link the example with the library
target_link_libraries(example
    PRIVATE
    myconsole
)