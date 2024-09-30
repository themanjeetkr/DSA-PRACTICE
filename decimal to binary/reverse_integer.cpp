#include<iostream>
using namespace std;  

int main(){
    int n;
    cin>>n;
    int ans=0;
    while (n!=0)
    {
        int digit=n%10;
        // to reverse the number
        ans=(ans*10)+digit;
        n=n/10;
    }
    cout<<"the reverse number is:"<<ans;
    
}