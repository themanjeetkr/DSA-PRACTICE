#include<iostream>
using namespace std;

int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;//pointer to pointer

    cout<<"sab sahi chal rhaa hai "<<endl;
    cout<<"printing p"<<p<<endl;

    cout<<*p<<endl;
    cout<<i<<endl;
    cout<<**p2<<endl;
}