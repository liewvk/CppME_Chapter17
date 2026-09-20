#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    string accountHolder;

    void setBalance(double b)
    {
        if (b >= 0)
            balance = b;
    }

    void deposit(double amount)
    {
        if (amount > 0)
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
    BankAccount acc;

    acc.accountHolder = "Sarah Lim";
    acc.setBalance(2000);
    acc.deposit(300);

    acc.displayBalance();

    return 0;
}
