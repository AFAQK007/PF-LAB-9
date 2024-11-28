#include<iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"Enter Number 1 : "<<endl;
    cin>>a;
    cout<<"Enter Number 2 : "<<endl;
    cin>>b;
    cout<<"Enter operator e.g +,-,*,/,%"<<endl;
    cin>>c;
    switch(c){
        case '+':
        cout<<"Your Addition is : "<<a+b<<endl;
        break;
        
        case '-':
        cout<<"Your Subtraction is : "<<a-b<<endl;
        break;
        
        case '%':
        cout<<"Your Remindation is : "<<a%b<<endl;
        break;

        case '/':
        cout<<"Your division is : "<<(float)a/(float)b<<endl;
        break;

        default:
        cout<<"You have entered wrong operator "<<endl;

    }
       return 0;
}