#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
       int j=1;
       int value=row;
       while (j<=row)
       {
        cout<<value;
        value=row+1;
        j=j+1;


       }
       cout<<"\n";
       row=row+1;
       
    }
    
    
}