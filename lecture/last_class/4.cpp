#include <iostream>

using namespace std;

class det{
    private: 
        string name;
        string city;
        string state;
        float marks;

    public:
        void set_value(string nm, string ct, string st, float mk) {
            name = nm;
            city = ct;
            state = st;
          ;  marks = mk;
        }

        void get_value() {
            cout << "Name: " << name << " City: " << city << " State: " << state << " Marks: " << marks << endl;
        };
};

int main() {
    string nm;
    string ct;
    string st;
    float mk;
    det dt;
    cout << "Enter the Name: ";
    cin >> nm;
    cout << "Enter the City: ";
    cin >> ct;
    cout << "Enter the State: ";
    cin >> st;
    cout << "Enter the Marks: ";
    cin >> mk;
    dt.set_value(nm, ct, st, mk);
    dt.get_value();
    return 0;
}
