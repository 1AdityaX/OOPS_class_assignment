// Find the roots of a quadratic equation ax2 + bx + c = 0. (Handle real and
// imaginary roots using if-else.)

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    float discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        float root = -b / (2 * a);
        cout << "Roots are real and the same." << endl;
        cout << "Root: " << root << endl;
    } else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1: " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imagPart << "i" << endl;
    }
    return 0;
};
