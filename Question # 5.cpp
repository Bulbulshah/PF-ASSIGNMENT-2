#include <iostream>
using namespace std;

int main() {
    int rows;

    
    cout << "Input number of rows: ";
    cin >> rows;

    int i = rows; // Start from the highest number of rows
    do {
        int j = i; // Initialize j to the current row value
        do {
            cout << j << " "; // Print the current value of j
            j--; // Decrement j
        } while (j >= 1); // Continue until j reaches 1

        cout << endl; // Move to the next line after completing a row
        i--; // Decrement i for the next row
    } while (i >= 1); // Continue until i reaches 1

    return 0;
}


