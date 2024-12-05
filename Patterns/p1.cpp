#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n) //for number of rows
    {
        int j=1;
        while (j<=n)// for number of columns 
        {
           cout<<"*";
           j+=1;        //for increment
        }
        cout<<"\n";
       i=i+1;
        
    }
    
}