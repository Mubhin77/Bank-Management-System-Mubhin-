#ifndef customer_h
#define customer_h


#include <iostream>
#include <cstdlib>
using namespace std;

class Customer {
private:
    string name, contactNumber, address, dateOfBirth;

public:
    string getName() {
        return name;
    }

    void inputCustomerDetails() {
        cout << "Enter your full name: " << endl;
        getline(cin, name);

        cout << "Enter contact number: " << endl;
        getline(cin, contactNumber);

        cout << "Enter address: " << endl;
        getline(cin, address);

        cout << "Enter date of birth in yyyy-mm-dd format:: " << endl;
        getline(cin, dateOfBirth);
    }

    Customer(
        string _name,
        string _contactNumber,
        string _address,
        string _dateOfBirth
    ) {
        name = _name;
        contactNumber = _contactNumber;
        address = _address;
        dateOfBirth = _dateOfBirth;
    }
};
#endif