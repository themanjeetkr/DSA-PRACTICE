#include<iostream>
using namespace std;

int main(){
    char ch[6]="abcde";
    cout<<ch<<endl;

    char *c=&ch[0];
    cout<<c<<endl;
}