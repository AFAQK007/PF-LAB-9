#include <iostream>
using namespace std;
int main()
{
    int balance = 1000;
    int n;
    cout << "Menu : " << endl;
    cout << "1. Deposit " << endl;
    cout << "2.  Withdraw" << endl;
    cout << "3.  Check Balance " << endl;
    cout << "4. Exit " << endl;
    cout << "Enter menu Number you want of : "<<endl;
    cin >> n;
    switch (n)
    {
    case 1:
        int deposit;
        cout << "Enter Deposit Amount : " << endl;
        cin >> deposit;
        cout << "Your Deposited Amount" << "of " << deposit << " is ADDED " << endl;
        cout << "Your balance after deposit is : " << deposit + balance << endl;
        break;

    case 2:
        int withdraw;
        cout << "Enter Withdrawal Amount : " << endl;
        cin >> withdraw;
        if (withdraw > balance)
        {
            cout << "Your Withdraw Amount is higher than Balance" << endl;
        }
        else
        {
            cout << "Your Withdrawal Amount is " << withdraw << endl;
            cout << "Your Balance after withdrawal is " << balance - withdraw << endl;
        }
        break;

    case 3:
        cout << "Your Current Balance is : " << balance << endl;
        break;

    case 4:
        cout << "You are exited Succesfully:" << endl;
        break;

    default:
        cout << "Other than 1,2,3 and 4" << endl;
    }
    return 0;
}