#include<iostream>
using namespace std;

 int main(){
    int n=3;

    cout<<n<<endl;
// address of n is =n
    cout<<"the address of n is "<<&n<<endl;
    int *p=&n;
    
    cout<<"the value is"<<*p<<endl;
    cout<<"the address is "<<p<<endl;

// copying a pointer 

    int *q=p;
    cout<<p<<q<<endl;
    cout<<*p<<*q<<endl;




 }