#include<iostream>
using namespace std;
 
 int main(){
    int arr[10];
    int *ptr=&arr[0];
    cout<<ptr<<endl;   //the address of zero index
    ptr=ptr+1;
    cout<<ptr<<endl;    //the address of first index 
 }