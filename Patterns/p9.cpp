#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i;
    i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
        char ch;
        ch='A'+i-1;
        cout<<ch<<" ";
        j=j+1;
           
        }
        cout<<"\n";
        i=i+1;
        
    }
    

}