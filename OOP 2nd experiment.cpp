#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;

protected:
    float balance;

public:
    string name;

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter balance: ";
        cin >> balance;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nBalance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    float interestRate = 5.0;

    void calculateInterest() {
        cout << "Interest: "
             << balance * interestRate / 100 << endl;
    }
};

int main() {
    SavingsAccount s;

    s.getDetails();
    s.display();
    s.calculateInterest();

    return 0;
}
