// Given marks of a student (0–100), print the grade: A (≥90), B (80–89),
// C (70–79), D (60–69), F (below 60).

#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter the marks (0-100): ";
    cin >> marks;
    if (marks >= 90 && marks <= 100) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80 && marks < 90) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70 && marks < 80) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60 && marks < 70) {
        cout << "Grade: D" << endl;
    } else if (marks >= 0 && marks < 60) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid marks entered." << endl;
    }
    return 0;
};