#include <iostream>
using namespace std;

// Function to manually sort the array using Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Input array
    int arr[] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -46};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the given array
    cout << "The given array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array manually
    bubbleSort(arr, n);

    // Variables to store the closest pair
    int closestLeftIndex = 0, closestRightIndex = 0;
    int minSum = 1000000; // A very large value to initialize the minimum sum

    // Iterate through the array to find the closest pair
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];

            // Update the closest pair if the current sum is closer to zero
            if (abs(sum) < abs(minSum)) {
                minSum = sum;
                closestLeftIndex = i;
                closestRightIndex = j;
            }
        }
    }

    // Output the result
    cout << "The Pair of elements whose sum is minimum are: ["
         << arr[closestLeftIndex] << ", " << arr[closestRightIndex] << "]" << endl;

    return 0;
}
