cmake_minimum_required(VERSION 3.22)
project(orgchart_a)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(sources)

add_executable(orgchart_a
        sources/OrgChart.cpp
        sources/OrgChart.hpp
        Demo.cpp
        doctest.h
        TestCounter.cpp)
