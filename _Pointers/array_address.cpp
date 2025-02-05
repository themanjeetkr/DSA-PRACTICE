#include<iostream>
using namespace std;

int main(){
    int arr[10]={2,4,6};
    cout<<"the address of first memory block is "<<&arr[0]<<endl;

    cout<<"4th"<<*arr<<endl;
        // arr[2]=*arr+1 or arr[i]=*(arr+i) or i[arr]=*(i+arr)
    cout<<"5th"<<*arr+1<<endl;// hey
    cout<<"6th"<<*(arr+1)<<endl; 
    cout<<"7th"<<*(arr)+1 <<endl;//next number 
}