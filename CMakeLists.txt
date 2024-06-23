# Copyright (c) 2024 Jim Eliot

cmake_minimum_required(VERSION 3.16)

project(
  github-actions-cmake-example
  DESCRIPTION "GitHub Action CMake example"
  LANGUAGES CXX)

# Options
option(ENABLE_TEST "Enable tests" ON)

# Enable CTest
if(ENABLE_TEST)
  enable_testing()
endif()

# Find dependencies
if(ENABLE_TEST)
  find_package(GTest REQUIRED)
endif()

add_subdirectory(src)

if(ENABLE_TEST)
  add_subdirectory(test)
endif()
