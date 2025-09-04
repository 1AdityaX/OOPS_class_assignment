#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << "Addition is: " << a+b << endl;
    cout << "Subtraction is: " << a-b << endl;
    cout << "Multiplication is: " << a*b << endl;
    cout << "Division is: " << a/b << endl;
    cout << "Remainder is: " << a%b << endl;
    return 0;
}