cmake_minimum_required(VERSION 2.6)
project(HelloComplex)

enable_testing()
if(NOT EXISTS ${PROJECT_SOURCE_DIR}/bin) 
  file(MAKE_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
endif()
if(NOT EXISTS ${PROJECT_SOURCE_DIR}/lib) 
  file(MAKE_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
endif()
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(HelloComplex
  ${PROJECT_SOURCE_DIR}/src/HelloComplex.cpp)
add_test(exeTest ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/HelloComplex)
