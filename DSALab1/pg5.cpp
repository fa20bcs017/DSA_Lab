#include<iostream>
using namespace std;


// Problem 5: Create a dynamic array of integers using pointers and allocate memory for it.
int main() {
    int* dynamicArr = new int[5];
    for (int i = 0; i < 5; i++) {
        dynamicArr[i] = i * 2;
    }
    for (int i = 0; i < 5; i++) {
        cout << dynamicArr[i] << " ";
    }
    cout << endl;
    delete[] dynamicArr; // Don't forget to free the memory
    return 0;
}

