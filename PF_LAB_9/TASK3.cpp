#include<iostream>
using namespace std;
int main(){
    char c ;
    cout<<"Enter your Grade : "<<endl;
    cin>>c;
    switch(c){
        case 'A':
        cout<<"--EXCELLENT--"<<endl;
        break;

        case 'B':
        cout<<"--GOOD--"<<endl;
        break;

        case 'C':
        cout<<"--Do Hard Work--"<<endl;
        break;
        
        case 'D':
        cout<<"--Not Good--"<<endl;
        break;

        case 'F':
        cout<<"--Fail--"<<endl;
        break;

        default : 
        cout<<"Wrong Grade Entered "<<endl;
}
return 0;
}