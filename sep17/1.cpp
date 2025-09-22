#include <iostream>

using namespace std;

class Vector;
class Matrices {
    private:
        int arr[2][2];
    public:
        Matrices(int a, int b, int c, int d) {
            this->arr[0][0] = a;
            this->arr[0][1] = b;
            this->arr[1][0] = c;
            this->arr[1][1] = d;
        };

        void get_matrices() {
            cout << "The matrix: " << arr[0][0] << " " << arr[0][1] << " " << arr[1][0] << " " << arr[1][1] << endl;
        }

        friend Vector vector_matrices_sangam(Vector *v1, Matrices *m1);
        
};

class Vector {
    private:
        int arr2[2];

    public:
        Vector(int a, int b) {
            this->arr2[0] = a;
            this->arr2[1] = b;
        }

        void get_vector(void) {
            cout << "The vector: " << arr2[0] << " " << arr2[1] << endl;
        }

        friend Vector vector_matrices_sangam(Vector *v1, Matrices *m1);

};


Vector vector_matrices_sangam(Vector *v1, Matrices *m1) {
    Vector v2(0, 0);
    v2.arr2[0] = m1->arr[0][0] * v1->arr2[0] + m1->arr[0][1] * v1->arr2[1];
    v2.arr2[1] = m1->arr[1][0] * v1->arr2[0] + m1->arr[1][1] * v1->arr2[1];
    return v2;
}

int main() {
    Matrices m1(1, 2, 3, 4);
    Vector v3(0, 0);
    m1.get_matrices();
    Vector v1(2, 8);
    v1.get_vector();

    v3 = vector_matrices_sangam(&v1, &m1);
    v3.get_vector();
    return 0;
}