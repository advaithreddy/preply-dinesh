#include <bits/stdc++.h>
using namespace std;


void insert(int*& arr, int& size, int index, int value) {
    // Create a new array with one more element
    int* newArr = new int[size + 1];

    // Copy elements up to the insertion point
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }

    // Insert the new element
    newArr[index] = value;

    // Copy the remaining elements
    for (int i = index; i < size; ++i) {
        newArr[i + 1] = arr[i];
    }

    // Delete the old array
    delete[] arr;

    // Update the pointer and size
    arr = newArr;
    size++;
}



int main() {

    // Difference between static and dynamic array
    // int arr[6] = {1,2,3,4,5,6}; // static array

    int arr1[6];

    int *arr2;         // creating a pointer
    arr2 = new int[6]; // assign to the pointer

    delete[] arr2;

    // Traverse the dynamic array
    for (int i = 0; i < 5; i++){
        cout << arr2[i] << " ";
    }


    // Insertion of an element
    int size = 5;
    int* arr = new int[size] {1, 2, 3, 4, 5};

    int index = 2;
    int value = 10;

    insert(arr, size, index, value);

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
