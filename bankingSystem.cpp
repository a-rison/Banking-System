#include "bank.h"
using namespace std;
template <typename T>

bool isInputValid(T &data){
    if(cin >> data) return true;
    return false;
}

int main()
{
    Bank b;
    Account acc;

    int choice;
    string fname, lname;
    long accountNumber;
    float balance;
    float amount;
    cout << "***Banking System***" << endl;
    do
    {
        cout << "\n\tSelect one option below ";
        cout << "\n\t1 Open an Account";
        cout << "\n\t2 Balance Enquiry";
        cout << "\n\t3 Deposit";
        cout << "\n\t4 Withdrawal";
        cout << "\n\t5 Close an Account";
        cout << "\n\t6 Show All Accounts";
        cout << "\n\t7 Quit";
        cout << "\nEnter your choice: ";
        if(!isInputValid(choice)) goto OUTSIDE;
        switch (choice)
        {
        case 1:
            cout << "Enter First Name: ";
            if(!isInputValid(fname)) goto OUTSIDE;
            cout << "Enter Last Name: ";
            if(!isInputValid(lname)) goto OUTSIDE;
            cout << "Enter initil Balance: ";
            if(!isInputValid(balance)) goto OUTSIDE;
            cout << endl
                 << "Congradulation Account is Created" << endl;
            cout << acc;
            break;
        case 2:
            cout << "Enter Account Number:";
            if(!isInputValid(accountNumber)) goto OUTSIDE;
            acc = b.BalanceEnquiry(accountNumber);
            cout << endl
                 << "Your Account Details" << endl;
            cout << acc;
            break;
        case 3:
            cout << "Enter Account Number:";
            if(!isInputValid(accountNumber)) goto OUTSIDE;
            cout << "Enter Balance:";
            if(!isInputValid(amount)) goto OUTSIDE;
            acc = b.Deposit(accountNumber, amount);
            cout << endl
                 << "Amount is Deposited" << endl;
            cout << acc;
            break;
        case 4:
            cout << "Enter Account Number:";
            if(!isInputValid(accountNumber)) goto OUTSIDE;
            cout << "Enter Balance:";
            if(!isInputValid(amount)) goto OUTSIDE;
            acc = b.Withdraw(accountNumber, amount);
            cout << endl
                 << "Amount Withdrawn" << endl;
            cout << acc;
            break;
        case 5:
            cout << "Enter Account Number:";
            if(!isInputValid(accountNumber)) goto OUTSIDE;
            b.CloseAccount(accountNumber);
            cout << endl
                 << "Account is Closed" << endl;
            cout << acc;
        case 6:
            b.ShowAllAccounts();
            break;
        case 7:
            break;
        default:
            cout << "\nEnter corret choice";
            exit(0);
        }
    } while (choice != 7);
    OUTSIDE:
        cout << "INVALID INPUT: Please try again\n";
        return 0;
    return 0;
}
