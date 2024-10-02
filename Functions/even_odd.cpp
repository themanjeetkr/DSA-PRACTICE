#include<iostream>
using namespace std;
int even_odd( int c){
    // bool eve=1;
    if (c%2==0)
    {
        cout<<"it is even number"<<endl;
       
    }
    else{
        cout<<"it is an odd number"<<endl;
    }
    

}

int main(){
    int a;
    cout<<"enter the number a"<<endl;
    cin>>a;
    int output= even_odd(a);

    

}