#include <iostream>
using namespace std;

// Function to calculate the length of a string manually
int calculateLength(const string& str) {
    int length = 0;
    for (char ch : str) {
        length++;
    }
    return length;
}

// Function to reverse a string manually
void reverseString(const string& str) {
    int length = calculateLength(str); // Calculate length manually
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    string str1 = "example"; // Initialized string
    string str2;

    cout << "Enter a string: ";
    cin >> str2; // Input string from the user

    // Compare the strings
    if (str1 == str2) {
        cout << "The strings are similar." << endl;
    } else {
        cout << "The strings are not similar." << endl;
    }

    // Print strings in reverse
    cout << "Reversed initialized string: ";
    reverseString(str1);

    cout << "Reversed input string: ";
    reverseString(str2);

    return 0;
}
