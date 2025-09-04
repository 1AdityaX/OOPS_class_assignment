#include <iostream>
#include <string>
#include <list>

using namespace std;

class details {
    private:
        int roll_no;
        float marks;
        string name;
        float maths, science, social, english, computer;

    public:
        void set_value(int rn, float mr, string nm) {
            roll_no = rn;
            marks = mr;
            name = nm;
        };
        
        void get_value(void) {
            cout << "Name: " << name << " | Marks: " << marks << " | Roll No: " << roll_no << endl;
        }

        void set_marks(float m1, float m2, float m3, float m4, float m5) {
            maths = m1;
            science = m2;
            social = m3;
            english = m4;
            computer = m5;
        }

        void get_average() {
            float average = (maths + science + social + english + computer) / 5.0;
            cout << "The average is: " << average;
        }
};

int main() {
    details d1;
    d1.set_value(34, 90, "Aditya");
    d1.get_value();
    list<string> sub = {"Maths", "Science", "Social", "English", "Computer"};
    vector<float> marks;
    for (auto i: sub) {
        float m;
        cout << "Enter the " << i << " Marks" << endl;
        cin >> m;
        marks.push_back(m);
    }
    auto it = marks.begin();
    float m1 = *it++;
    float m2 = *it++;
    float m3 = *it++;
    float m4 = *it++;
    float m5 = *it++;
    d1.set_marks(m1, m2, m3, m4, m5);
    d1.get_average();
    return 0;
}