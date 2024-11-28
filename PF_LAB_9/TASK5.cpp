#include <iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter Colour of Traffic Light : "<<endl;
    cin>>c;
    switch(c){
        case 'R':
        cout<<"STOP"<<endl;
        break;

        case 'G':
        cout<<" GO"<<endl;
        break;

        case 'Y':
        cout<<" SLOW DOWN "<<endl;
        break;

        default :
        cout<<"You have entered other than R,G,Y"<<endl;

    }
    return 0;
} 