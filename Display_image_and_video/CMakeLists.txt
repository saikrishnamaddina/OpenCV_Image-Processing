
cmake_minimum_required(VERSION 2.8)
project( name )
find_package(OpenCV REQUIRED)
add_executable(<excutablename> <.cpp>)
target_link_libraries( <excutablename> ${OpenCV_LIBS})    
