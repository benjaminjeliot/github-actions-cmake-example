# Copyright (c) 2024 Jim Eliot

add_library(xmpl Factorial.cpp)

target_compile_features(xmpl PRIVATE cxx_std_17)

target_include_directories(
  xmpl PUBLIC $<INSTALL_INTERFACE:include>
              $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>)
