#include<iostream>

using namespace std;
int isprime(int n){
    // 1 for true
    // 0 for false
    for (int i = 2; i < n-1; i++)
    {
        /* code */
        if (n%i==0)
        {
           return 0;
        }
       
    }
    return 1;
    
}
int main(){
    int i;
    cin>>i;
    if (isprime(i))
    {
        cout<<i<<" "<<"is the prime number"<<endl;

    }
    else{
        cout<<i<<" "<<"is not the prime number"<<endl;
    }
    
}