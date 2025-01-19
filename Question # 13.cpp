#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowels = 0, consonants = 0, uppercase = 0, lowercase = 0;
    int specialChars = 0, words = 0, digits = 0;

    int inWord = 0;
    int i = 0;

    // Using a while loop to iterate until the null-terminator
    while (input[i] != '\0') {
        char ch = input[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (inWord == 0) {
                words++; // Start of a new word
                inWord = 1;
            }

            if (ch >= 'A' && ch <= 'Z') {
                uppercase++;
            } else if (ch >= 'a' && ch <= 'z') {
                lowercase++;
            }

            char lowerChar = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
            if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (ch >= '0' && ch <= '9') {
            digits++;
            inWord = 0; // Digits are not part of words
        } else if (ch == ' ' || ch == '\t' || ch == '\n') {
            inWord = 0; // Words end with whitespace
        } else {
            specialChars++;
            inWord = 0; // Special characters end words
        }

        i++;  // Move to the next character
    }

    // Output the results
    cout << "Total Vowels: " << vowels << endl;
    cout << "Total Consonants: " << consonants << endl;
    cout << "Total Uppercase Letters: " << uppercase << endl;
    cout << "Total Lowercase Letters: " << lowercase << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << specialChars << endl;
    cout << "Total Words: " << words << endl;

    return 0;
}
