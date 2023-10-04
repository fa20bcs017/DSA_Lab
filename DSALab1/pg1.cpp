#include <iostream>

using namespace std;

// Problem 1: Declare a pointer variable and assign it to the address of an integer.
int main() {
    int num = 42;
    int* ptr = &num;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    return 0;
}







