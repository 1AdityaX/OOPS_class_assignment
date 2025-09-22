#include <iostream>
using namespace std;

#include "thead.h"

bank_acc :: bank_acc(string n, int a){

        this->name = n;
        this->acc_no = a;
        this->bal = 0;
        cout<<"new acc has been created for "<< name <<endl;
    };

void bank_acc :: get_details(void){
    cout<<"mr/mrs."<< name << "account number is :" << acc_no << endl;

}

void bank_acc :: deposit(int amount){
    bal = bal + amount;
    cout<<"amount "<< amount << "has been deposited to the account no. "<< acc_no << endl;

}

void bank_acc::withdraw(int amount) {
    bal = bal - amount;
    cout << "Amount " << amount << " has been withdrawn from account no." << acc_no << endl;
}