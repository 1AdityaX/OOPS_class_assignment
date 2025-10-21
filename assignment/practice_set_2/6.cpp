// Print the digits of a number in reverse order using a do-while loop.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The digits in reverse order are: ";
    do {
        int digit = n % 10;
        cout << digit << " ";
        n = n / 10;
    } while (n != 0);
    cout << endl;
    return 0;
}