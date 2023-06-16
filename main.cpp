#include<iostream>
#include<cstdlib>
#include "account.h"
#include "bank.h"
#include "customer.h"

using namespace std;

int main() {
    Bank Nabil = Bank("Nabil Bank", "Baneswar");
    Customer customer = Customer("", "", "", "");
    int choice;
    Account customerAccount("", "");

    

    do {
        cout << "\n      Welcome to Nabil Bank      " <<endl;
        cout << "\n\tSelect one option below ";
        cout << "\n\t1 Open an Account";
        cout << "\n\t2 Balance Enquiry";
        cout << "\n\t3 Deposit";
        cout << "\n\t4 Withdrawal";
        cout << "\n\t5 Close an Account";
        cout << "\n\t6 Quit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            customer.inputCustomerDetails();
            customerAccount = Nabil.openAccount(customer.getName());

            cout << "Congratulations, " << customer.getName() << "! Your account has been successfully created." << endl;
            cout << "Account Number: " << customerAccount.getAccNumber() << endl;
            cout << "PIN: " << customerAccount.getPin() << endl;
        }
        else if (choice == 2) {
            customerAccount.balanceEnquiry();
        }
        else if (choice == 3) {
            customerAccount.deposit();
        }
        else if (choice == 4) {
            customerAccount.withdraw();
        }
        else if (choice == 5) {
            customerAccount.closeAccount();
        }
        else{
            cout<<"Invalid input. Try again"<<endl;
        }

    } while (choice != 6);

    return 0;
}
