#include <iostream>
#include <cstring>

using namespace std;


// Problem 8: Create a structure and use pointers to access its members.
struct MyStruct {
    int value;
};

int main() {
    MyStruct myObj;
    myObj.value = 42;
    MyStruct* ptr = &myObj;
    cout << "Value accessed via pointer: " << ptr->value << endl;
    return 0;
}