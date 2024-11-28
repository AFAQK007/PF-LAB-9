#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Month Number from 1 to 12 : " << endl;
    cin >> n;
    switch (n)
    {
    case 1:
    case 2:
    case 3:
        cout << " --WINTER--" << endl;
        break;

    case 4:
    case 5:
        cout << "--Spring--" << endl;
        break;

    case 6:
    case 7:
    case 8:
    case 9:
        cout << "--Summer" << endl;
        break;

    case 10:
    case 11:
    case 12:
        cout << "--Autumn--" << endl;
        break;

    default:
        cout << "You have entered other than 1 to 12" << endl;
    }
    return 0;
}