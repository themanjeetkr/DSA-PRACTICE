#include<iostream>
 
 using namespace std;
//  void print(int *p){
//     cout<<p<<endl;
//  }
//     void update(int *p){
//         *p=*p+1;
//     }

int  getsum(int arr[],int n){
    cout<<sizeof(arr)<<endl;

    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
return sum;
    
}



 int main(){
    // int value=5;
    // int *p=&value;

    // // print(p);
    // cout<<"before"<<*p<<endl;   
    // update(p);
    // cout<<"after "<<*p<<endl;  //The change is applied to the original value because p points to its address.
    int arr[5]={1,2,4,5,6};
    cout<<"sum is "<<getsum(arr,5);
    
 }