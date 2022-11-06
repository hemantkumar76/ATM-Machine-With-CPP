#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank
{
    // Private variables
private:
    string name;
    long long accountnumber;
    char type[100];
    long long amount = 0;
    long long total = 0;
    // Public variables
public:
    // Function to set the user data
    void setvalue()
    {
        cout << "Enter name\n";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Account number\n";
        cin >> accountnumber;
        cout << "Enter Account type\n";
        cin >> type;
        cout << "Enter Balance\n";
        cin >> total;
    }
    void showdata()
    {
        cout << "Name is :" << name << endl;
        cout << "Account No is :" << accountnumber << endl;
        cout << "Account type is :" << type << endl;
        cout << "Balance is :" << total << endl;
    }
    // Function to deposit the amount in ATM
    void deposit()
    {
        cout << "\nEnter amount to be Deposited\n";
        cin >> amount;
    }
    // Function to show the balance amount
    void showbal()
    {
        total = total + amount;
        cout << "\ntotalal balance is: " << total;
    }
    // Function to withdraw the amount in ATM
    void withdrawl()
    {
        int a, avai_balance;
        cout << "Enter amount to withdraw\n";
        cin >> a;
        avai_balance = total - a;
        cout << "Available Balance is" << avai_balance;
    }
};
// Driver Code
int main()
{
    // Object of class
    Bank b;
    int choice;
    // Infinite while loop to choose
    // options everytime
    while (1)
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME TO HEMANTS ATM~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n";
        cout << "Enter Your Choice\n";
        cout << "\t1. Enter name, Account "
             << "number, Account type\n";
        cout << "\t2. Balance Enquiry\n";
        cout << "\t3. Deposit Money\n";
        cout << "\t4. Show totalal balance\n";
        cout << "\t5. Withdraw Money\n";
        cout << "\t6. Cancel\n";
        cin >> choice;
        // Choices to select from
        switch (choice)
        {
        case 1:
            b.setvalue();
            break;
        case 2:
            b.showdata();
            break;
        case 3:
            b.deposit();
            break;
        case 4:
            b.showbal();
            break;
        case 5:
            b.withdrawl();
            break;
        case 6:
            exit(1);
            break;
        default:
            cout << "\nWrong Choice\n";
        }
    }
}
