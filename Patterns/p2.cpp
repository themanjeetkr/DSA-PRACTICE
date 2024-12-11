#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)// no o
    {
        int j=1;// initialize the columns
        while (j<=n)
        {
            cout<<i;
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
        
        
    }
    
}