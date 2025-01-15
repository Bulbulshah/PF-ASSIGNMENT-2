#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

int main() {
    int matrix[3][3];
    bool isIdentity = true;
    int minValue = INT_MAX, maxValue = INT_MIN;

    // Input the matrix
    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Check if the matrix is an identity matrix and find min/max
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Check identity matrix condition
            if (i == j && matrix[i][j] != 1) {
                isIdentity = false; // Diagonal element is not 1
            } else if (i != j && matrix[i][j] != 0) {
                isIdentity = false; // Non-diagonal element is not 0
            }

            // Update minimum and maximum values
            if (matrix[i][j] < minValue) {
                minValue = matrix[i][j];
            }
            if (matrix[i][j] > maxValue) {
                maxValue = matrix[i][j];
            }
        }
    }

    // Output results
    cout << "The matrix is " << (isIdentity ? "" : "not ") << "an identity matrix." << endl;
    cout << "Minimum value in the matrix: " << minValue << endl;
    cout << "Maximum value in the matrix: " << maxValue << endl;

    return 0;
}
