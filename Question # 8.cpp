#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100; // Maximum size of the merged array
    int array1[MAX_SIZE], array2[MAX_SIZE], mergedArray[MAX_SIZE * 2];
    int size1, size2, mergedSize = 0;

    // Input for the first array
    cout << "Input the number of elements to be stored in the first array: ";
    cin >> size1;
    cout << "Input " << size1 << " elements in the array:" << endl;
    for (int i = 0; i < size1; i++) {
        cout << "element - " << i << " : ";
        cin >> array1[i];
    }

    // Input for the second array
    cout << "Input the number of elements to be stored in the second array: ";
    cin >> size2;
    cout << "Input " << size2 << " elements in the array:" << endl;
    for (int i = 0; i < size2; i++) {
        cout << "element - " << i << " : ";
        cin >> array2[i];
    }

    // Merge the two arrays
    for (int i = 0; i < size1; i++) {
        mergedArray[mergedSize++] = array1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[mergedSize++] = array2[i];
    }

    // Sort the merged array in descending order
    for (int i = 0; i < mergedSize - 1; i++) {
        for (int j = i + 1; j < mergedSize; j++) {
            if (mergedArray[i] < mergedArray[j]) {
                int temp = mergedArray[i];
                mergedArray[i] = mergedArray[j];
                mergedArray[j] = temp;
            }
        }
    }

    // Display the merged array
    cout << "\nThe merged array in descending order is: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    // Calculate and display the frequency of duplicate numbers
    cout << "\nFrequency of duplicate numbers:" << endl;
    bool counted[MAX_SIZE * 2] = {false}; // Track counted numbers
    for (int i = 0; i < mergedSize; i++) {
        if (!counted[i]) {
            int count = 1; // Count the current number
            for (int j = i + 1; j < mergedSize; j++) {
                if (mergedArray[i] == mergedArray[j]) {
                    count++;
                    counted[j] = true; // Mark the duplicate as counted
                }
            }
            if (count > 1) { // Display only duplicates
                cout << "Number " << mergedArray[i] << " occurs " << count << " times." << endl;
            }
        }
    }

    return 0;
}
