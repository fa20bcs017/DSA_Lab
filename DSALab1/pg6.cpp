#include<iostream>
using namespace std;

// Problem 6: Write a program to swap the values of two integers using pointers.
void swapIntegers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    swapIntegers(&x, &y);
    cout << "Swapped values: x=" << x << ", y=" << y << endl;
    return 0;
}
