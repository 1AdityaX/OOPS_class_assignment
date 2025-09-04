// Check whether a given number is a palindrome or not. (Example: 121 is palindrome, 123 is not.)
#include <iostream>
using namespace std;
int main() {
    int num, originalNum, reversedNum = 0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
    while (num != 0) {  
        int digit = num % 10;  
        reversedNum = reversedNum * 10 + digit;  
        num /= 10;  
    }
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }
    return 0;
};

