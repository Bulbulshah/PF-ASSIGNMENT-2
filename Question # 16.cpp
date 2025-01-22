#include <iostream>
#include <cmath> // For pow function
using namespace std;

// Function to check if a number is an Armstrong number
int isArmstrong(double number) {
    // Separate the integer and fractional parts
    int integerPart = static_cast<int>(number);
    double fractionalPart = number - integerPart;

    // Count digits in the integer part
    int temp = integerPart, count = 0;
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    // Calculate the sum of the digits raised to the power of the digit count
    int sum = 0;
    temp = integerPart;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    // Return 1 if it's an Armstrong number, otherwise return 0
    if (sum == integerPart && fractionalPart == 0) {
        return 1; // Armstrong number
    } else {
        return 0; // Not an Armstrong number
    }
}

int main() {
    double num;
    cout << "Enter a decimal number: ";
    cin >> num;

    if (num < 0) {
        cout << "Negative numbers cannot be Armstrong numbers." << endl;
        return 0;
    }

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
