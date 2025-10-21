#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll_no;

public:
    Student(int roll_no, string name)
    {
        this->name = name;
        this->roll_no = roll_no;
    }

    void get_student()
    {
        cout << "Name: " << name << endl
             << "Roll no: " << roll_no << endl;
    }
};

class MathCourse
{
    string course;
    int no_assign;

public:
    MathCourse(string course, int assignment)
    {
        this->course = course;
        this->no_assign = assignment;
    }

    void get_details()
    {
        cout << " Course: " << course << endl
             << " Assignment: " << no_assign << endl;
    }
};

class Registry : public Student, public MathCourse
{
    bool k;

public:
    Registry(bool k, int assign, string course, string name, int roll_no) : MathCourse(course, assign), Student(roll_no, name)
    {

        if (k == true)
        {
            cout << "Registered" << endl;
        }
        else
        {
            cout << "Not Registered" << endl;
        }
    }
};
int main()
{

    Registry r1(false, 5, "OOP", "Usman", 34);
    r1.get_student();
    r1.get_details();
    return 0;
};