#include <iostream>

using namespace std;

class University {
    protected:
        int id;
        string name;
    public:
        University(int id, string name) {
            this->id = id;
            this->name = name;
        }

        void get_details() {
            cout << "ID: " << id << " Name: " << name << endl;
        }
};

class Students: public University {
    int roll_no;
    string school;
    public:
        Students(int roll_no, string school, string nm, int id): University(id, nm){
            this->roll_no = roll_no;
            this->school = school;
        }

        void get_student() {
            cout << "Roll no: " << roll_no << "School: " << school << endl;
        }
};

class ClassRepresentative : public Students {
    int task;
    string course;
    public:
        ClassRepresentative(int task, string course, int roll_no, string school, int id, string nm) : Students(roll_no, school, nm, id) {
            this->task = task;
            this->course = course;
        }

        void get_cr() {
            cout << "Task: " << task << " Course: " << course << endl;
        }
};

class StudentGovernment: Students {
    bool president;
    bool vice_president;
    bool cultural_society;
    bool treasurer;

    public:
        StudentGovernment(int id, string name, int roll_no, string school, bool president, bool vice_president, bool cultural_society, bool treasurer): Students(roll_no, school, name, id) {
            this->president = president;
            this->vice_president = vice_president;
            this->cultural_society = cultural_society;
            this->treasurer = treasurer;
        }

        void get_position() {
            if (this->president == true) {
                cout << this->name << " is President" << endl;
            }
            if (this->vice_president == true) {
                cout << this->name << " is Vice President" << endl;
            }
            if (this->cultural_society == true) {
                cout << this->name << " is part of Cultural Society" << endl;
            }
            if (this->treasurer == true) {
                cout << this->name << " is Treasurer" << endl;
            }
        }
};

int main() {
    ClassRepresentative c1(1, "OOPs", 88, "SCDS", 8, "Some Name");
    StudentGovernment sg1(1, "somename", 12, "SCDS", true, false, false, false);
    c1.get_cr();
    sg1.get_position();
}