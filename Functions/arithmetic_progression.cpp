#include<iostream>
using namespace std;

int a__(int a){
    int nth=3*a+7;
    return nth;
    // for an nth term

}

int main(){
    int n;
    cin>>n;
    int c=a__(n);
    cout<<"the value of ap is:"<<c;



}