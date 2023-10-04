#include<iostream>
using namespace std;

// Problem 3: Declare an array of integers and use a pointer to iterate through it.
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    for (int i = 0; i < 5; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
    return 0;
}