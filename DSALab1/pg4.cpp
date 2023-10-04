#include <iostream>

using namespace std;
// Problem 4: Write a function that takes a pointer to an integer as an argument and modifies the integer.
void modifyInt(int* ptr) {
    *ptr = 123;
}

int main() {
    int num = 42;
    modifyInt(&num);
    cout << "Modified value: " << num << endl;
    return 0;
}
