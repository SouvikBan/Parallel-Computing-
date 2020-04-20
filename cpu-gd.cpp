/* CPU Code for coordinate gradient descent.
The problem is minimize f(x) which is a lasso regression function. 
So, f(x) = 1/2* L2-NORM(Ax - b)^2 {linear regression eq} + lambda* L1-NORM(x) {the regulariser}
Matrix A, x and b is supposed to be in billions for the GPU problem. 
*/

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

float f(x) {
    return  
}


int main() {

    // int rows = ..., cols = ...;
    // int** A = new int*[rows];
    // for (int i = 0; i < rows; ++i)
    //     A[i] = new int[cols];


    //Initialise the Matrix A, right now the dimension is (100x100)
    //All elements in matrix are between 0 and 500( 0<=x<=500)
    vector<vector<float>> A(100);
    
    for (int i=0; i<100; i++){
        A[i] = vector<float>(100);
        for (int j=0; j<100; j++)
            A[i][j] = rand() % 500;
    }
    

    //Initialise the vector b, right now the dimension is (100x1)
    //All elements in vector are between 0 and 500( 0<=x<=500)
    vector<float> b;

    for(int i=0; i<100; i++){
        elem = rand() % 500 ;
        b.push_back(elem);
    }

    //Initialise our variable x with all 0's. Dimension is (100x1) 
    vector<float> x(100);
    for(int i=0; i<100; i++)
        x[i] = 0


    //regularising variable
    float lambda;


    //Coordinate descent algorithm
    for(int iter=0; iter<1000; i++){
        for(int j=0; j<100; j++){
            for ()
            rho[j] = 



        }
        printf("x after %f iteration is:%f",x);
    }


    // for (int i = 0; i < rows; ++i)
    //     delete [] matrix[i];
    // delete [] matrix;
}