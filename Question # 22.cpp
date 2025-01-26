#include <iostream>
#include <string>
using namespace std;

// Structure definition
struct Student {
    int ID;
    string name;
    float GPA;
    float percentage;
    int marks[5];
};

// UDF to calculate total marks
int S_Records(Student& student) {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += student.marks[i];
    }
    return total;
}

int main() {
    Student student;

    // Input student details
    cout << "Enter Student ID: ";
    cin >> student.ID;
    cin.ignore(); // To handle leftover newline character
    cout << "Enter Student Name: ";
    getline(cin, student.name);
    cout << "Enter Student GPA: ";
    cin >> student.GPA;
    cout << "Enter Student Percentage: ";
    cin >> student.percentage;

    cout << "Enter 5 Marks of the Student:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Mark " << i + 1 << ": ";
        cin >> student.marks[i];
    }

    // Calculate the total marks using the UDF
//    int totalMarks = S_Records(student);

    // Print the student details
    cout << "\nStudent Details:\n";
    cout << "ID: " << student.ID << endl;
    cout << "Name: " << student.name << endl;
    cout << "GPA: " << student.GPA << endl;
    cout << "Percentage: " << student.percentage << "%" << endl;
    cout << "Marks: ";
    for (int i = 0; i < 5; i++) {
        cout << student.marks[i] << " ";
    }
    cout << "\nTotal Marks: " << S_Records(student) << endl;

    return 0;
}
