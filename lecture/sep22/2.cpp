#include <iostream>
#include <string>
using namespace std;
// base class
class university
{
protected:
    int id;
    string name;

public:
    university(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    void get_details()
    {
        cout << "name: " << name << " ID:" << id << endl;
    }
};
// all the public datamemebrs and methods of the university class will become the public data members and methods of derived class
class Student : private university
{ // derived class
private:
    // int id;
    int course_code;
    // string name;
    string school;

public:
    Student(int id, int course_code, string name, string school) : university(id, name)
    {
        this->course_code = course_code;
        // this->id=id;
        // this->name=name;
        this->school = school;
    }
    void get_detail2()
    {
        get_details();
        cout << "name: " << name << " ID:" << id << " course_code " << course_code << " School " << school << endl;
    }
};

int main()
{
    Student s1(123, 02, "me", "CDS");
    s1.get_detail2();
    // s1.get_details();
}