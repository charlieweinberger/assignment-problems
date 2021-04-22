#include <iostream>
#include <cassert>

void calcSum(int array0[], int array1[], int rowSum[], int numCols) { 
    for (int i = 0; i < numCols; i++) {
        rowSum[i] = array0[i] + array1[i];
    }
}

int main() {
    std::cout << "Testing...\n";

    int matrix[2][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 }
    };

    int numRows = sizeof(matrix) / sizeof(matrix[0]);
    int numCols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int rowSum[numCols];
    calcSum(matrix[0], matrix[1], rowSum, numCols);

    assert(rowSum[0] == 5);
    assert(rowSum[1] == 7);
    assert(rowSum[2] == 9);

    std::cout << "Success!\n";

    return 0;
}