// Reverse the digits of a given number. (Example: input 1234 → output 4321)

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int reversedNum = 0;
    while (num != 0) {  
        int digit = num % 10;  
        reversedNum = reversedNum * 10 + digit;  
        num /= 10;  
    }
    cout << "Reversed number: " << reversedNum << endl;
    return 0;
};