
cmake_minimum_required(VERSION 3.12)
project(Migration VERSION 0.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_STANDARD 99)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# Find the following packages
find_package(PythonInterp 3.0 REQUIRED)
find_package(MKL)
find_package(CUDA 8.0)

# Handle missing MKL library
if (NOT MKL_FOUND)
    message("MKL NOT FOUND!")
endif()

# Handle missing CUDA library
if (NOT CUDA_FOUND)
    message("CUDA NOT FOUND!")
endif()

# Build Source Code by default
add_subdirectory(cpp_src)

# Build Examples
if(Migration_BUILD_EXAMPLES)
  add_subdirectory(examples)
endif()

# Build Unittests
if(Migration_BUILD_UNITTESTS)
  add_subdirectory(unittests)
endif()

# Build Benchmarks
if(Migration_BUILD_BENCH)
  add_subdirectory(benchmark)
endif()
