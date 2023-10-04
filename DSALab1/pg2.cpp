#include<iostream>
using namespace std;

// Problem 2: Use a pointer to change the value of the integer it points to.
int main() {
    int num = 42;
    int* ptr = &num;
    *ptr = 99;
    cout << "Updated value: " << num << endl;
    return 0;
}
