#include <iostream>

using namespace std;

class Vector {
    protected:
        int x;
        int y;

    public:
    Vector(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

class Matrix {
    protected:
        Vector v1;
        Vector v2;
    public:
        Matrix(int x1, int y1, int x2, int y2) : v1(x1, y1), v2(x2, y2) {
        }
};

class Multiply: public Vector, public Matrix {
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    public:
        Multiply(int x1, int y1, int x2, int y2, int x3, int y3): Matrix(x1, y1, x2, y2), Vector(x3, y3) {
        }

        void multiply() {
            int x4;
            int y4;

            x4 = (this->x1*this->x3) + (this->x2*this->x3);
            y4 = (this->y1*this->y3) + (this->y2*this->y3);
            cout << x4 << " " << y4 << endl;
        }
};
//Create 2 classes: Matrices (2x2 matrice) and Vectors (2 elements) separately. 
//create a third class which inherits both the classes.
//Use multiple inheritance to achieve this.

int main() {
    Multiply m(1, 2, 3, 4, 5, 6);
    m.multiply();
    return 0;
}