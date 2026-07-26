cmake_minimum_required(VERSION 3.10)
project(ex15_04)
add_executable(${PROJECT_NAME} ex15_04.cpp)
target_link_options(${PROJECT_NAME} PRIVATE
        -sNO_EXIT_RUNTIME=1
        -sEXPORTED_FUNCTIONS=['_main','_malloc','_free','_get_standard']
        -sEXPORTED_RUNTIME_METHODS=['HEAPF32'])
target_link_libraries(${PROJECT_NAME} mylib)
add_subdirectory(lib)            