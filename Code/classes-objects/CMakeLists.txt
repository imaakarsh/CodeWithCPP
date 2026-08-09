cmake_minimum_required(VERSION 3.10)
project(classes-objects)

file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
foreach(src ${SOURCES})
  get_filename_component(bin_name ${src} NAME_WE)
  add_executable(${bin_name} ${src})
endforeach()
