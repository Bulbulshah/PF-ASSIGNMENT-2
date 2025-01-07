#include <iostream>
using namespace std;

// Function to display the array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to sort the array in descending order
void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    const int MAX_SIZE = 100; // Maximum size of the array
    int array[MAX_SIZE] = {12, 45, 7, 34, 23}; // Initial array
    int size = 5; // Current size of the array
    int newValue;

    cout << "Original array: ";
    displayArray(array, size);

    // Insert a new value
    cout << "Enter the value to insert: ";
    cin >> newValue;

    if (size < MAX_SIZE) {
        array[size] = newValue; // Add the new value at the end of the array
        size++; // Increase the size of the array
    } else {
        cout << "Array is full. Cannot insert new value." << endl;
        return 1;
    }

    // Sort the array in descending order
    sortDescending(array, size);

    // Display the sorted array
    cout << "Array after inserting and sorting in descending order: ";
    displayArray(array, size);

    return 0;
}
