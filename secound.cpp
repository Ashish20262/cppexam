#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;   

public:

    BankAccount(int amount) {
        balance = amount;
    }

    void credit(int amount) {
        balance += amount;
        cout << amount << " credited.\n";
    }

    void debit(int amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << amount << " debited.\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(1000);  

    acc.showBalance();
    acc.credit(5000);
    acc.debit(3000);
    acc.showBalance();

    return 0;
}
