#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accNo;
    float balance;

public:
    BankAccount(int a, float b) {
        accNo = a;
        balance = b;
    }
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(int a, float b) : BankAccount(a, b) {}

    void display() {
        balance = balance + balance * 0.05;
        cout << "Savings Balance: " << balance << endl;
    }
};

class CurrentAccount : public BankAccount {
public:
    CurrentAccount(int a, float b) : BankAccount(a, b) {}

    void display() {
        if (balance < 10000)
            balance = balance - 500;

        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    SavingsAccount s(101, 20000);
    CurrentAccount c(102, 8000);

    s.display();
    c.display();

    return 0;
}