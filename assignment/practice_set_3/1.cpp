// Create a class Student with private data members name and age. Write
// setter and getter methods to assign and retrieve their values. Demonstrate their use in main().

#include <iostream>
#include <string.h>
using namespace std;

class Student {
    private:
        string name;
        int age;
    public:
        void getter() {
            cout << "Name: " << this->name << " Age: " << this->age << endl;
        }

        void setter(string n, int a) {
            this->name = n;
            this->age = a;
        }
};

int main() {
    Student s1;
    s1.setter("name", 19);
    s1.getter();
}
