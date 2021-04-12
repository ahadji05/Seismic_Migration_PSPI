
add_library(
    linalg SHARED
    linalg.cpp
    )

target_include_directories(
    linalg 
    PUBLIC 
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
    )
