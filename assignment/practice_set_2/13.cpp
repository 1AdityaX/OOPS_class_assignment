// Take a number as input and check if it is an Armstrong number using a while loop.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, originalNum, remainder, result = 0, digits = 0;
    cout << "Enter an integer: ";
    cin >> n;
    originalNum = n;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++digits;
    }

    originalNum = n;

    // Calculate the sum of the power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == n)
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;

    return 0;
}