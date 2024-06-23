# Copyright (c) 2024 Jim Eliot

# Options
set(ENABLE_TEST
    ON
    CACHE BOOL "Enable unit tests")

# Google Test
set(GTEST_PREFIX_PATH "")

set(CMAKE_PREFIX_PATH
    "${GTEST_PREFIX_PATH}"
    CACHE PATH "CMake prefix path")
