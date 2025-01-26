#include<iostream>
#include<string>
using namespace std;

int main() {
    string input1 = "Hello world", input2;
    
    // Display the first initialized string
    cout << "First String is: " << input1 << endl;
    
    // Take the second string input from the user
    cout << "Enter a string for input2: ";
    cin >> input2;
    
    // Compare the two strings
    if (input1 == input2) {
        cout << "Both strings are similar." << endl;
    } else {
        cout << "Strings are not similar." << endl;
    }

    // Print the first string in reverse order (without using length())
    cout << "Reversed First String: ";
    int i = 0;
    while (input1[i] != '\0') {
        i++;  // Find the length manually by checking for the null character
    }
    // Now i points to the length of the string
    for (int j = i - 1; j >= 0; j--) {
        cout << input1[j];  // Print characters in reverse order
    }
    cout << endl;

    // Print the second string in reverse order (without using length())
    cout << "Reversed Second String: ";
    int k = 0;
    while (input2[k] != '\0') {
        k++;  // Find the length manually by checking for the null character
    }
    // Now k points to the length of the string
    for (int l = k - 1; l >= 0; l--) {
        cout << input2[l];  // Print characters in reverse order
    }
    cout << endl;

    return 0;
}
