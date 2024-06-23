# Copyright (c) 2024 Jim Eliot

add_executable(my-app main.cpp)

target_compile_features(my-app PRIVATE cxx_std_17)

target_link_libraries(my-app PRIVATE xmpl)
