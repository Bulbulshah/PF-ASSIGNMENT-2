#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Function prototypes
void UDf1(int);
void UDF2(float, float, float);
float UDF3(int, int, int, int);

// Function template for calculating sum
template <typename T>
T calculateSum(T a, T b, T c) {
    return a + b + c;
}

// Function template for calculating average
template <typename T>
T calculateAverage(T a, T b, T c) {
    return (a + b + c) / 3;
}

int main() {
    int num;
    float a = 5.5;
    float b = 1.5;
    float c = 3.2;

    cout << "Enter your number: ";
    cin >> num;

    cout << "UDF 1 operation:" << endl;
    UDf1(num);

    cout << "UDF 2 operation:" << endl;
    UDF2(a, b, c);

    cout << "UDF 3 operation: Average of numbers is: ";
    cout << UDF3(5, 4, 3, 7) << endl;

    // First execution with integers
    int int1 = 10, int2 = 20, int3 = 30;
    cout << "\nUsing integers:" << endl;
    cout << "Sum: " << calculateSum(int1, int2, int3) << endl;
    cout << "Average: " << calculateAverage(int1, int2, int3) << endl;

    // Second execution with floats
    float float1 = 10.5, float2 = 20.5, float3 = 30.5;
    cout << "\nUsing floats:" << endl;
    cout << "Sum: " << calculateSum(float1, float2, float3) << endl;
    cout << "Average: " << calculateAverage(float1, float2, float3) << endl;

    return 0;
}

// UDF 3: Calculate average of four integers
float UDF3(int a, int b, int c, int d) {
    float avg = (a + b + c + d) / 4.0;
    return avg;
}

// UDF 2: Calculate the sum of squares of three floats
void UDF2(float a, float b, float c) {
    a = pow(a, 2);
    b = pow(b, 2);
    c = pow(c, 2);
    cout << "Sum of the squares of values: " << a + b + c << endl;
}

// UDF 1: Print multiplication table of a number
void UDf1(int table) {
    for (int i = 1; i <= 10; i++) {
        cout << table << " * " << i << " = " << table * i << endl;
    }
}
