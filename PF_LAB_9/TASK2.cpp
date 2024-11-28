#include<iostream>
using namespace std;
int main(){
    char c ;
    cout<<"Enter any Alphabatic Character :"<<endl;
    cin>>c;
    switch(c){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'i':
        case 'I':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        cout<<"It is a VOWEL "<<endl;
        break;

        default : 
        cout<<"It is a COSONANT "<<endl;
       
    }
    return 0;
    }