#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class XYCoordinate {
    private:
        float x;
        float y;
    public:
        void set_value(float a1, float a2); // Outside the class
        void get_values();
        void calc_vector();

    // Constructor or Special Method
    XYCoordinate() { // Default Constructor
        cout << "Hello World" << endl;
        this->x = 67;
        this->y = 78;
    }

    XYCoordinate(float n1, float n2) {
        this->x = n1;
        this->y = n2;
    }

    XYCoordinate(float n1) {
        this->x = n1;
    }
};

void XYCoordinate::set_value(float a1, float a2) {
    this->x = a1;
    this->y = a2;
};

void XYCoordinate::get_values(void) {
    cout << " x : " << this->x << " y:  " << this->y << endl;
};

void XYCoordinate::calc_vector(void) {
    float num = sqrt(pow(this->x, 2) + pow(this->y, 2));
    cout << "The vector is " << num;
};

int main() {
    XYCoordinate s1(94, 78), s2;
    s1.get_values();

    s1.set_value(87, 78);
    s1.get_values();

    return 0;
}