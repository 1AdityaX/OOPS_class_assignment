#include <iostream>

using namespace std;

class A {
    public:
        int a;

};

class B {
    public:
        int b;

};

// Casting of unrelated class won't working
int main() {
    A* oa;
    B* ob;
    oa = (A*)ob; // unsafe cast
    oa->a = 4;
    cout << "Value of a is " << oa->a << endl;
    return 0;
}