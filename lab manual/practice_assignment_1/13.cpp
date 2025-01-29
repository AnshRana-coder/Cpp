#include <iostream>
using namespace std;

int main() {
    double balance = 1000.00;
    int choice;
    double amount;

    do {
    
        cout << "\nATM Machine" << endl;
        cout << "1. Withdraw" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Balance Inquiry" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Error: Enter a valid amount greater than 0." << endl;
                } else if (amount > balance) {
                    cout << "Error: Insufficient balance." << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful. Your new balance is: $" << balance << endl;
                }
                break;

            case 2: 
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Error: Enter a valid amount greater than 0." << endl;
                } else {
                    balance += amount;
                    cout << "Deposit successful. Your new balance is: $" << balance << endl;
                }
                break;

            case 3: 
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 4: 
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;

            default: 
                cout << "Error";
                break;

        }
    }while (choice != 4);
}