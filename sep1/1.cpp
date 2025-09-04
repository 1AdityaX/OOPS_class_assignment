#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    private:
        string name;
        float balance;
    
    public:
        void set_value(string n, float b) {
            this->name = n;
            this->balance = b;
        }

        void get_values(void) {
            cout << "Name: " << this->name << " | Balance : " << this->balance << endl;
        }

        void deposit(float n1) {
            this->balance = this->balance + n1;
        }

        void withdraw(float n2) {
            if (this->balance - n2 < 0) {
                cout << "Insufficient Balance" << endl;
            }
            this->balance = this->balance - n2;
        }
    BankAccount(string a, float b) {
        this->name = a;
        this->balance = b;
    }
};

int main() {
    BankAccount a1("Aditya", 100000.0);
    BankAccount a2("Someone", 1000);
    a1.get_values();
    a1.deposit(5000.5);
    a1.get_values();

    a2.get_values();
    a2.deposit(100000);
    a2.get_values();

    a1.withdraw(10);
    a1.get_values();

    a2.withdraw(3000);
    a2.get_values();

    return 0;
}