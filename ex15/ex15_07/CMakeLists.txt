cmake_minimum_required(VERSION 3.10)
project(polygon)
add_executable(${PROJECT_NAME} polygon.cpp polygon_bindings.cpp)
target_link_options(${PROJECT_NAME} PRIVATE
	-sNO_EXIT_RUNTIME=1
    -sMODULARIZE=1
    -sEXPORT_NAME="MyModule"
    -lembind)
add_library(mypolyline polyline.cpp )
target_include_directories(mypolyline PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib)
target_link_libraries(${PROJECT_NAME} mypolyline)