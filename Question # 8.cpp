#include <iostream>
#include <algorithm> // For sort()
using namespace std;

int main() {
    int arry1[40], arry2[40], merged[80]; // Increased merged array size to accommodate both arrays
    int n1, n2, k = 0;

    // Input size of first array
    cout << "Enter the size of the first array: ";
    cin >> n1;

    cout << "Enter " << n1 << " elements for the first array:\n";
    for (int i = 0; i < n1; i++) {
        cin >> arry1[i];
        merged[k++] = arry1[i]; // Add elements to merged array
    }

    // Input size of second array
    cout << "Enter the size of the second array: ";
    cin >> n2;

    // Check if sizes match
    if (n1 != n2) {
        cout << "Error: Arrays must have the same size!" << endl;
        return 1;
    }

    cout << "Enter " << n2 << " elements for the second array:\n";
    for (int i = 0; i < n2; i++) {
        cin >> arry2[i];
        merged[k++] = arry2[i]; // Add elements to merged array
    }

    // Sort the merged array in descending order
    sort(merged, merged + k, greater<int>());

    // Print the merged array
    cout << "\nMerged array in descending order:\n";
    for (int i = 0; i < k; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    // Count the frequency of duplicates
    cout << "\nFrequency of duplicate numbers:\n";
    int count = 1;
    for (int i = 0; i < k; i++) {
        if (i < k - 1 && merged[i] == merged[i + 1]) {
            count++;
        } else {
            cout << merged[i] << " occurs " << count << " time(s)" << endl;
            count = 1; // Reset count
        }
    }

    return 0;
}
