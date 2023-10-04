#include <iostream>
#include <cstring>

using namespace std;



// Problem 14: Write a program that reads a string input and counts the number of vowels using pointers.
int countVowels(const char* str) {
    int vowelCount = 0;
    while (*str != '\0') {
        char c = tolower(*str);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
        str++;
    }
    return vowelCount;
}

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, sizeof(input));

    int vowels = countVowels(input);
    cout << "Number of vowels: " << vowels << endl;

    return 0;
}