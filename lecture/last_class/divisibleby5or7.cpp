#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a%5 == 0 && a%7 == 0) {
        cout << "The number is divisible by both 5 and 7" << endl;
    } else if (a%5 == 0) {
        cout << "The number is divisible by 5" << endl;
    } else if (a%7 == 0) {
        cout << "The number is divisible by 7" << endl;
    } else {
        cout << "The number is neither divisible by 5 nor 7" <<endl;
    }
    return 0;
}