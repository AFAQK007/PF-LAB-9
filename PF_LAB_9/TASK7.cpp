#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any digit from 0 to 9: " << endl;
    cin >> n;
    switch (n)
    {
    case 0:
        cout << " ZERO ";
        break;

    case 1:
        cout << " ONE ";
        break;

    case 2:
        cout << " TWO";
        break;

    case 3:
        cout << " Three";
        break;

    case 4:
        cout << " Four ";
        break;

    case 5:
        cout << " Five";
        break;

    case 6:
        cout << " Six ";
        break;

    case 7:
        cout << " Seven ";
        break;

    case 8:
        cout << " Eight ";
        break;

    case 9:
        cout << " Nine ";
        break;

    default:
        cout << "You have entered othan from 0 to 9" << endl;
    }
    return 0;
}