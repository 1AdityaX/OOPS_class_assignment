#include <iostream>

using namespace std;

class Complex {
    private:
        float a;
        float b;
    public:
        static int count;
        Complex(float x, float y) {
            this->a = x;
            this->b = y;
            cout << "New Member has been created " << endl;
        };

        void get_details() {
            cout << "Number is: " << a << "+ " << b << "i" << endl;
        };

        Complex operator-(const Complex& second_obj) {
            this->a = this->a + second_obj.a;
            this->b = this->b + second_obj.b;
            return second_obj;
        }

        ~Complex() {
            cout << "Complex Number " << a << " + i" << b << " has been destroyed" << endl;
        }

};

int Complex::count = 0;

int main() {
    {
        Complex c1(6, 5), c2(2, 3), c4(0, 0);
        c4 = c1-c2;
        c4.get_details();
    }
    Complex c6(4, 9), c7(5, 9), c9(0, 0);
    c9 = c6 - c7;
    return 0;
}