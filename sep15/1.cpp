#include <iostream>

using namespace std;
class Complex
{
    float x;
    float y;

public:
    Complex(float a, float b)
    {
        this->x = a;
        this->y = b;
        cout << "New complex number has been created: " << a << " + " << y << "i" << endl;
    }
    Complex operator*(const Complex &second_obj)
    {
        Complex c3(0, 0);
        c3.x = this->x * second_obj.x - this->y * second_obj.y;
        c3.y = this->y * second_obj.x + this->x * second_obj.y;
        return c3;
    }
    void get_details()
    {
        cout << " complex number is " << this->x << " +" << this->y << "i" << endl;
    }
    ~Complex()
    {
        cout << "Complex number has been destroyed" << this << endl;
    }
};
int main()
{
    Complex c1(3, 4), c2(4, 5), c4(0, 0);
    c1.get_details();
    c4 = c1 * c2;
    c4.get_details();
    return 0;
}