#include <iostream>
#include <exception>
using namespace std;

class BankException : public exception {
public:
    const char* what() const noexcept override {
        return "Banking Error";
    }
};

class InsufficientBalance : public BankException {
public:
    const char* what() const noexcept override {
        return "Insufficient Balance!";
    }
};

class InvalidAmount : public BankException {
public:
    const char* what() const noexcept override {
        return "Invalid Withdrawal Amount!";
    }
};

class Bank {
    float balance;

public:
    Bank(float b) {
        balance = b;
    }

    void withdraw(float amount) {
        if (amount <= 0)
            throw InvalidAmount();

        if (amount > balance)
            throw InsufficientBalance();

        balance -= amount;

        cout << "Withdrawal Successful!" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }
};

int main() {
    Bank b(5000);

    try {
        float amount;

        cout << "Enter withdrawal amount: ";
        cin >> amount;

        b.withdraw(amount);
    }
    catch (InvalidAmount &e) {
        cout << e.what();
    }
    catch (InsufficientBalance &e) {
        cout << e.what();
    }

    return 0;
}
