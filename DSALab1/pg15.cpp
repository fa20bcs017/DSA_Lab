#include <iostream>
#include <cstring>

using namespace std;

// Problem 15: Create a function that takes a pointer to an array of integers and returns the sum of its elements.
int sumArray(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = sumArray(arr, sizeof(arr) / sizeof(arr[0]));
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}
