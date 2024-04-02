cmake_minimum_required(VERSION 3.15)
project(MatrixMultiplicationHPX)

# Find HPX package
find_package(HPX REQUIRED)

# Add executable
add_executable(MatrixMultiplicationHPX main.cpp)

# Link against HPX
target_link_libraries(MatrixMultiplicationHPX HPX::hpx HPX::wrap_main)

# Set C++ standard
target_compile_features(MatrixMultiplicationHPX PUBLIC cxx_std_17)
