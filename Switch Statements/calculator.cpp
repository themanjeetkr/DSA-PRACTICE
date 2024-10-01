#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the number a"<<endl;
    cin>>a;
    int b;
    cout <<"enter the number b"<<endl;
    cin>>b;

    char ch;
    cout<<"which operation you want to perform"<<endl;
    cin>>ch;

    switch (ch)
    {
    case '+':
     cout<<a+b;      


     break;
     case '-':
     cout<<a-b;

     break;
     case '*':
     cout<<a*b;
     break;
     case '/':
     cout<<a/b;
     break;

     case '%':
     cout<<a%b;
    
    default:cout<<"please enter a valid operation";
        break;
    }

    
   

}