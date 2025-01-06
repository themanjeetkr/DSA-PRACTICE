#include<iostream>
using namespace std;
int power(int n){
    if (n==0)
     return 1;

    int smallernumber=power(n-1);
    int biggernumber=2 * smallernumber;
    return biggernumber;
}


int main(){
    int n;
    cin>>n;
    int ans=power(n);

    cout<<ans;

}