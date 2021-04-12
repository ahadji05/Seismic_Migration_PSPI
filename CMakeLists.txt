
cmake_minimum_required(VERSION 3.12)
project(Migration VERSION 0.1)

#find_package(PythonInterp REQUIRED)

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