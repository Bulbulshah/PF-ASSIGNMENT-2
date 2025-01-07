#include <iostream>
using namespace std;

// Function to input a matrix
void inputMatrix(int rows, int cols, int matrix[10][10], const string &name) {
    cout << "Input elements in the " << name << " matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "element - [" << i << "],[" << j << "] : ";
            cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if two matrices are equal
bool areMatricesEqual(int rows, int cols, int matrix1[10][10], int matrix2[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                return false; // Matrices are not equal
            }
        }
    }
    return true; // Matrices are equal
}

// Function to add two matrices
void addMatrices(int rows, int cols, int matrix1[10][10], int matrix2[10][10], int result[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;
    int matrix1[10][10], matrix2[10][10], sumMatrix[10][10];

    // Input dimensions of the first matrix
    cout << "Input Rows and Columns of the 1st matrix: ";
    cin >> rows1 >> cols1;

    // Input dimensions of the second matrix
    cout << "Input Rows and Columns of the 2nd matrix: ";
    cin >> rows2 >> cols2;

    // Check if dimensions are equal
    if (rows1 != rows2 || cols1 != cols2) {
        cout << "Matrices must have the same dimensions to compare or add.\n";
        return 1;
    }

    // Input matrices
    inputMatrix(rows1, cols1, matrix1, "first");
    inputMatrix(rows2, cols2, matrix2, "second");

    // Display matrices
    cout << "The first matrix is:\n";
    displayMatrix(rows1, cols1, matrix1);

    cout << "The second matrix is:\n";
    displayMatrix(rows2, cols2, matrix2);

    // Check if matrices are equal
    cout << "The Matrices can be compared:\n";
    if (areMatricesEqual(rows1, cols1, matrix1, matrix2)) {
        cout << "Two matrices are equal.\n";
    } else {
        cout << "Two matrices are not equal.\n";
    }

    // Add matrices
    addMatrices(rows1, cols1, matrix1, matrix2, sumMatrix);

    // Display the sum of matrices
    cout << "The addition of the two matrices is:\n";
    displayMatrix(rows1, cols1, sumMatrix);

    return 0;
}
