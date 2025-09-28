#include <iostream>

using namespace std;

class Complex {
    private:
        float x;
        float y;
    public:
        static int count;

        Complex(float a, float b) {
            this->x = a;
            this->y = b;
            count++;
        };

        static void get_count() {
            cout << "The count of objects created is: " << count << endl;
        }

        void get_details() {
            cout << "The X: " << x << " Y: " << y << endl;
        }
        friend void add_complex(Complex a, Complex b);

        
};

void add_complex(Complex a, Complex b) {
    float xsum = a.x + b.x;
    float ysum = a.y + b.y;
    cout << "The sum is : x: " << xsum << " y: " << ysum << endl; 
}

int Complex::count = 0;

int main() {
    Complex a1(1, 2);
    Complex a2(3, 4);
    Complex a3(5, 6);
    a3.get_count();
    add_complex(a1, a2);
    return 0;
};