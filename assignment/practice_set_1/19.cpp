// Write a program to calculate the simple interest. Formula: SI = P×R×T/100
#include <iostream>
using namespace std;
int main() {
    float P, R, T, SI;
    cout << "Enter principal amount (P): ";
    cin >> P;
    cout << "Enter rate of interest (R): ";
    cin >> R;
    cout << "Enter time in years (T): ";
    cin >> T;
    SI = (P * R * T) / 100;
    cout << "Simple Interest (SI) = " << SI << endl;
    return 0;
};
