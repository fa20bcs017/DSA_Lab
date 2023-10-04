#include <iostream>
#include <cstring>

using namespace std;

// Problem 12: Write a program to dynamically allocate memory for a 2D array of integers using pointers.
int main() {
    int rows = 3;
    int cols = 4;
    
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    
    int counter = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = counter++;
        }
    }
    
    // Access and display the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    
    return 0;
}
