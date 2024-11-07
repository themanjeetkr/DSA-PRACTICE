#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<b;
    for (int i = 0; i<=n; i++)//for loop  FOR N NUMBER OF ITERATION 
    {
        int next_number=a+b;//next number SUM OF A+B
        cout<<next_number<<"   ";
        a=b;
        b=next_number;


    }
    
}