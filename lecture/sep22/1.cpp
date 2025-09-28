#include <iostream>

using namespace std;

class University
{
private:
    int Id;
    string name;

public:
    University(int id, string name)
    {
        this->Id = id;
        this->name = name;
    }
    void get_details()
    {
        cout << "Name: " << name << " Id: " << Id << endl;
    }
};

class student
{
private:
    int Id;
    int course_name;
    string name;
    string school;

public:
    student(int Id, int course_code, string name, string school)
    {
        this->course_name = course_name;
        this->Id = Id;
        this->name = name;
        this->school = school;
    }
    void get_details()
    {
        cout << "Name: " << name << " " << Id << " " << course_name << " " << endl;
    }
};

int main()
{
    University u1(123, "ME");
    u1.get_details();
}