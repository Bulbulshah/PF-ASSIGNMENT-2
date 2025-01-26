#include <iostream>
using namespace std;

// UDF to print multiplication tables for each element in the array
void table(int arr[5]) {
    for (int i = 0; i < 5; i++) {
        cout << "\nMultiplication table for " << arr[i] << ":" << endl;
        for (int j = 1; j <= 10; j++) {
            cout << arr[i] << " * " << j << " = " << arr[i] * j << endl;
        }
    }
}

int main() {
    int arr[5];
    
    // Taking input for the array from the user
    cout << "Enter 5 numbers to generate their multiplication tables: " << endl;
    for (int i = 0; i < 5; i++) {
//        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Calling the table() function
    table(arr);
    
    return 0;
}


