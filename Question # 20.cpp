#include <iostream>
#include <cmath>
using namespace std;

double calculateProductOfSquareRoots(int, int, int);
double calculateSquareRoot(int);
double calculateProduct(double, double, double);

int main() {
    int a, b, c;

    // Input values
    cout << "Enter Value for 'A': ";
    cin >> a;
    cout << "Enter Value for 'B': ";
    cin >> b;
    cout << "Enter Value for 'C': ";
    cin >> c;

    // Call the function and print result
    cout << "Final Product of Square Roots: " << calculateProductOfSquareRoots(a, b, c) << endl;

    return 0;
}

// Function to calculate the product of square roots
double calculateProductOfSquareRoots(int a, int b, int c) {
    // Calculate square roots
    double rootA = calculateSquareRoot(a);
    double rootB = calculateSquareRoot(b);
    double rootC = calculateSquareRoot(c);

    // Calculate and return the product
    return calculateProduct(rootA, rootB, rootC);
}

// Function to calculate the square root
double calculateSquareRoot(int x) {
    return sqrt(x);
}

// Function to calculate the product
double calculateProduct(double num1, double num2, double num3) {
    return num1 * num2 * num3;
}
