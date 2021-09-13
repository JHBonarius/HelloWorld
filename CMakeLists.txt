cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(HelloWorld VERSION 1.0)

# add the executable
add_executable(HelloWorld helloworld.cxx)

configure_file(HelloWorldConfig.h.in HelloWorldConfig.h)

target_include_directories(HelloWorld PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
