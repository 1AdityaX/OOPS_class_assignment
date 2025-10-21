#include <iostream>

using namespace std;

class Base {
   public:
    virtual void show() { 
        cout << "Welcome from base class" << endl; 
    }
    ~Base() { cout << "Base class destructor called" << endl; }
};

class Derived : public Base {
   public:
    void show() { 
        cout << "Welcome from derived class" << endl; 
    }
    ~Derived() { cout << "Derived class destructor called" << endl; }
};

int main() {
    Base b;
    Base* bptr;
    bptr = &b;
    Derived d;
    Derived* dptr;
    dptr = &d;

    b.show();
    d.show();

    bptr->show();
    dptr->show();
    // bptr = dptr;
    // bptr->show(); 
    // dptr = (Derived*)bptr;
    bptr = dptr; // upcasting
    dptr->show(); // upcasting
    return 0;
}
// Note: The destructors are not virtual, so if you delete a derived class object through
// a base class pointer, the derived class destructor will not be called, leading to potential resource leaks.
// To fix this, declare the base class destructor as virtual.