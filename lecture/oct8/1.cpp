#include <iostream>
using namespace std;

int main() {
    int i = 2;
    double j = 3.5;
    int *iptr = &i;
    double *jptr = &j;

    iptr = (int*) jptr;
    jptr = (double*) iptr; // unsafe cast
    // explicit casting integer to double pointer
    cout << *iptr << endl; // undefined behavior
    cout << *jptr;
    return 0;
}
