#include<iostream>

using namespace std;

int getsum(int *arr,int n){  // for taking the values of array
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}

int main(){
    int n;
    cin>>n;

    int *arr=new int[n];      //variable size array declare 
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    int ans=getsum(arr,n);

    cout<<"the sum is :"<<ans;
    
}