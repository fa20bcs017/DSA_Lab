#include <iostream>
#include <cstring>

using namespace std;

// Problem 9: Write a function that returns a pointer to the maximum element in an array of integers.
int* findMax(int arr[], int size) {
    if (size == 0) return nullptr;

    int* maxPtr = &arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
        }
    }
    return maxPtr;
}

int main() {
    int arr[] = {10, 25, 5, 42, 8};
    int* maxPtr = findMax(arr, 5);
    cout << "Maximum value: " << *maxPtr << endl;
    return 0;
}
