#ifndef account_h
#define account_h

#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
class Account {
private:
    string accountHoldersName;
    float balance;
    int accNumber;
    string bankName;
    int pin;

public:
    void balanceEnquiry() {
        int _accNumber;
        int _pin;
        cout << "Enter your accNumber: ";
        cin >> _accNumber;
        cout << "Enter your PIN: ";
        cin >> _pin;

        if ( _accNumber==accNumber && _pin == pin) {
            cout << "Your current balance is: " << balance << endl;
        }
        else{
            cout<<"Invalid input."<<endl;
        }
    }

    int getAccNumber() {
        return accNumber;
    }

    int getPin() {
        return pin;
    }

    Account(string _name, string _bankName) {
        accountHoldersName = _name;
        // Generate random account number
        srand(time(0));
        accNumber = rand() % 1000000000 + 1000000000;
        balance = 0.0;
        // Generate random PIN
        pin = rand() % 9000 + 1000;
        bankName = _bankName;
    }

    
    void deposit() {
        int _accNumber;
        int _pin;
        float amount;
        cout << "Enter your accNumber: ";
        cin >> _accNumber;
        cout << "Enter your PIN: ";
        cin >> _pin;

        if ( _accNumber==accNumber && _pin == pin) {
            cout << "Enter the amount to deposit: ";
            cin >> amount;

            balance = balance + amount;

            cout << "Deposit successful. Current balance: " << balance << endl;
        }
        else {
            cout << "Invalid input." << endl;
        }
    }

    void withdraw() {
        int _accNumber;
        int _pin;
        float amount;
        cout << "Enter your accNumber: ";
        cin >> _accNumber;
        cout << "Enter your PIN: ";
        cin >> _pin;

        if ( _accNumber==accNumber && _pin == pin)  {
            cout << "Enter the amount to withdraw: ";
            cin >> amount;

            if (amount <= balance) {
                balance = balance - amount;
                cout << "Withdrawal successful. Current balance: " << balance << endl;
            }
            else {
                cout << "Insufficient funds." << endl;
            }
        }
        else {
            cout << "Invalid input." << endl;
        }
    }

    void closeAccount() {
        int _pin;
        int _accNumber;
        cout << "Enter your accNumber: ";
        cin >> _accNumber;
        cout << "Enter your PIN to close the account: ";
        cin >> _pin;

        if ( _accNumber==accNumber && _pin == pin)  {
            balance = 0.0;
            cout << "Account closed successfully." << endl;
        }
        else {
            cout << "Invalid Input." << endl;
        }
    }
};
#endif