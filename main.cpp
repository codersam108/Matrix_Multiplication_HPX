#include <iostream>
#include <hpx/hpx_init.hpp>
#include <hpx/include/iostreams.hpp>
#include <hpx/include/parallel_for_loop.hpp>

using namespace std;

int hpx_main(int argc, char** argv) {
    int matA[3][2] = {{4,2}, {7,1}, {2,3}}; // No of Rows = 3
    int matB[2][3] = {{4,6,7}, {7,1,2}};    // No of Columns = 3

    hpx::cout<<"Matrix A:"<<hpx::endl;  // Printing value of Matrix A
    for( int i = 0 ; i< 3; i++) {
        for (int j = 0;  j<2; j++) {
            hpx::cout<<matA[i][j]<<"\t";  
        }
        hpx::cout<<hpx::endl;
    }

    hpx::cout<<"Matrix B:"<<hpx::endl;  // Printing value of Matrix B
    for( int i = 0 ; i< 2; i++) {
        for (int j = 0;  j<3; j++) {
            hpx::cout<<matB[i][j]<<"\t";
        }
        hpx::cout<<hpx::endl;
    }

    hpx::cout<<"Matrix Multiplication:"<<hpx::endl;

    hpx::parallel::for_loop(hpx::parallel::execution::par, 0, 3, [&](int i) {
        for (int j = 0;  j<3; j++) {  // Iteration upto no of columns in Matrix B
            int sum = 0; 
            for (int k = 0;  k< 2;  k++) {  // Iteration upto no of columns in Matrix A
                sum += matA[i][k] * matB[k][j];
            }
            hpx::cout << sum << "\t"; 
        }
        hpx::cout << hpx::endl;  
    });

    return hpx::finalize();
}

int main(int argc, char* argv[]) {
    // Initialize HPX runtime
    return hpx::init(argc, argv);
}
