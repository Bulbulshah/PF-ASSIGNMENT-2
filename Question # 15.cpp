#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int TotalCount[256] = {0}; // Array to store character frequencies

    cout << "Enter your String: " << endl;
    getline(cin, input);

    // Count occurrences of each character
    for (int i = 0; input[i] != '\0'; i++) {
        TotalCount[input[i]]++;
    }

    // Display the counts
    cout << "The count of each character is:\n";
    for (int i = 0; i < 256; i++) { // Corrected loop condition
        if (TotalCount[i] > 0) { // Only print characters that appear in the string
            cout << (char)i << " " << TotalCount[i] << endl;
        }
    }

    return 0;
}
