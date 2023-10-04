#include <iostream>
#include <cstring>

using namespace std;

// Problem 7: Implement a function to find the length of a C-string (null-terminated character array) using a pointer.
int findStringLength(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    const char* myString = "Hello, World!";
    int length = findStringLength(myString);
    cout << "Length of the string: " << length << endl;
    return 0;
}





