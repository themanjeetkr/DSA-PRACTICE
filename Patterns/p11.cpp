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
      char start='A'+n-i;
      while (j<=i)
      {
       cout<<start<<" ";
       start=start+1;
       j=j+1; 
      }
      cout<<"\n";
      i=i+1;
      
      
    }
    
}