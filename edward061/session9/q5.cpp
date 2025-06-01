#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Transaction {
    string type;
    double amount;
    double balanceAfterTransaction;
};

class BankAccount {
private:
    string accountNumber; 
    double balance; 
    double minimumBalance; 
    vector<Transaction> transactions; 

public:

    BankAccount(string accNum, double initialBalance, double minBalance = 0) {
        accountNumber = accNum;
        balance = initialBalance;
        minimumBalance = minBalance;
        cout << "Account created successfully with account number: " << accountNumber << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;

            Transaction depositTransaction = {"Deposit", amount, balance};
            transactions.push_back(depositTransaction);
            cout << "Deposited " << amount << " to account " << accountNumber << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance - amount >= minimumBalance) {
            balance -= amount;

            Transaction withdrawalTransaction = {"Withdraw", amount, balance};
            transactions.push_back(withdrawalTransaction);
            cout << "Withdrew " << amount << " from account " << accountNumber << endl;
        } else {
            cout << "Insufficient balance or withdrawal amount is invalid!" << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    string getAccountNumber() const {
        return accountNumber;
    }

    void printTransactionHistory() const {
        cout << "\nTransaction History for account: " << accountNumber << endl;
        if (transactions.empty()) {
            cout << "No transactions yet." << endl;
        } else {
            for (const auto& transaction : transactions) {
                cout << transaction.type << " of " << transaction.amount 
                     << ", New Balance: " << transaction.balanceAfterTransaction << endl;
            }
        }
    }

    double getMinimumBalance() const {
        return minimumBalance;
    }

    void setMinimumBalance(double newMinBalance) {
        minimumBalance = newMinBalance;
        cout << "Minimum balance set to " << minimumBalance << endl;
    }
};

int main() {

    BankAccount account1("12345", 1000.0, 50.0); 
    cout << "Initial balance: " << account1.getBalance() << endl;

    account1.deposit(500.0);
    account1.deposit(200.0);

    account1.withdraw(300.0);
    account1.withdraw(1500.0);  

    cout << "\nFinal balance in account: " << account1.getBalance() << endl;

    account1.printTransactionHistory();

    account1.setMinimumBalance(100.0);
    account1.withdraw(1000.0);  

    cout << "\nFinal balance after setting new minimum: " << account1.getBalance() << endl;

    return 0;
}
