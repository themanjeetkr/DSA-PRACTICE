#include<iostream>
using namespace std;
int power(int n){
    if (n==0)                        // check the base case
     return 1;

    int smallernumber=power(n-1);
    int biggernumber=2 * smallernumber;
    return biggernumber;                //2nd method 2*power(n-1);
}


int main(){
    int n;
    cin>>n;
    int ans=power(n);

    cout<<ans;

}