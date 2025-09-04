#include <iostream>

using namespace std;

class stateBank{
	private:
		string name;
		int account_no;
		float bal;
	public:
		static float total_balance;
		stateBank(string n, int a, float b) {
			this->name = n;
            this->account_no = a;
			this->bal = b;
			this->total_balance = total_balance + b;
		};

		void getDetails() {
			cout << "Name: " << this->name << "\nAccount Number: " << this->account_no << "\nBalance: " << this->bal;
            cout << "Total Balance of Bank " << total_balance << endl;

		};
};

float stateBank::total_balance = 0;

int main() {
	stateBank a1("Roxas", 63565, 3000.0);
    a1.getDetails();
    stateBank a2("Sri Balaji", 1111, 6000.0);
    a2.getDetails();
	return 0;
}