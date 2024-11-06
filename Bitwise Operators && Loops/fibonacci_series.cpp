#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<b;
    for (int i = 0; i<=n; i++)//for loop 
    {
        int next_number=a+b;//next number 
        cout<<next_number<<"   ";
        a=b;
        b=next_number;


    }
    
}