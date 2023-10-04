#include <iostream>
#include <cstring>

using namespace std;



// Problem 13: Implement a function that concatenates two C-strings using pointers.
char* concatenateStrings(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char* result = new char[len1 + len2 + 1]; // +1 for the null terminator

    strcpy(result, str1);
    strcat(result, str2);

    return result;
}

int main() {
    const char* firstName = "John";
    const char* lastName = "Doe";

    char* fullName = concatenateStrings(firstName, lastName);

    cout << "Full Name: " << fullName << endl;

    delete[] fullName; // Deallocate the dynamically allocated memory

    return 0;
}
