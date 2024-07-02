#include <iostream>
using namespace std;

void remove(int*& arr, int& size, int index) {
    // Create a new array with one less element
    int* newArr = new int[size - 1];

    // Copy elements up to the deletion point
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }

    // Skip the deleted element and copy the remaining elements
    for (int i = index + 1; i < size; ++i) {
        newArr[i - 1] = arr[i];
    }

    // Delete the old array
    delete[] arr;

    // Update the pointer and size
    arr = newArr;
    size--;
}

int main() {
    int size = 5;
    int* arr = new int[size] {1, 2, 3, 4, 5};

    int index = 2;

    remove(arr, size, index);

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
