#ifndef bank_h
#define bank_h
#include "account.h"

#include <iostream>
#include <cstdlib>
using namespace std;

class Bank {
public:
    string name, branch;

    Bank(string _name, string _branch) {
        name = _name;
        branch = _branch;
    }

    Account openAccount(string accHoldersName) {
        Account newAccount = Account(accHoldersName, name);
        return newAccount;
    }
};

#endif