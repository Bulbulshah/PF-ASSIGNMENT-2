#include <iostream>
using namespace std;

// Global array of 10 integers
int arr[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// User-defined function to calculate the sum of prime numbers
int sumOfPrimes() {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int primeSum = sumOfPrimes();
    cout << "The sum of prime numbers in the array is: " << primeSum << endl;
    return 0;
}
