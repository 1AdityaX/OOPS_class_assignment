// Write a program to create a class Student with data members name,
//age, and marks. Implement both a default constructor and a parameterized constructor to initialize the data.

#include <iostream>
#include <string.h>
using namespace std;
class Student {
    private:
        string name;
        int age;
        float marks;
    public:
        Student() { // Default Constructor
            this->name = "Unknown";
            this->age = 0;
            this->marks = 0.0;
        }

        Student(string n, int a, float m) { // Parameterized Constructor
            this->name = n;
            this->age = a;
            this->marks = m;
        }

        void display() {
            cout << "Name: " << this->name << ", Age: " << this->age << ", Marks: " << this->marks << endl;
        }
};