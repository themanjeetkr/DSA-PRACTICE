#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
     int count=1;
    while (row<=n)
    {
        int j=1;
        while (j<=row)
        {
            cout<<j;
            j=j+1;
        }
        cout<<"\n";
        row=row+1;

        
       
    }
    
}