#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
    string accountHolder;
    double balance;

    void deposit(double amount)
    {
        balance += amount;
    }

    void displayBalance()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance       : " << balance << endl;
    }
};

int main()
{
    BankAccount acc1;

    acc1.accountHolder = "John Tan";
    acc1.balance = 1000.0;

    acc1.deposit(500.0);
    acc1.displayBalance();

    return 0;
}
