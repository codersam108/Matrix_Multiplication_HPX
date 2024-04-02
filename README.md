Matrix Multiplication with HPX

This C++ program demonstrates Parallel matrix multiplication using the HPX (High Performance ParalleX) library. Matrix multiplication is a fundamental operation in linear algebra and is often used in various scientific and engineering applications.

Overview

The program initializes two matrices, matA and matB, and performs matrix multiplication using HPX's parallel for-loop construct. It divides the work of multiplying each row of matA with each column of matB among multiple threads for parallel execution.

I first made the program without HPX using simple logic of matrix multiplication in c++ and then integrated with HPX.
