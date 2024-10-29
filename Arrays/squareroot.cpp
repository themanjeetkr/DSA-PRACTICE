#include<iostream>
using namespace std;
int square(int arr[],int n){
    int s=0;
    int e=0;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        int squar=mid*mid;
    if (squar==n)
    {
       return mid;

    
    
    }
    if (squar>n)
    {
       e=mid-1;
    }
    else{
        s=mid+1;
    }
    
    

}
return -1;
}




int main(){
   int arr[5]={2,4,5,6,8};
   int squaroot=square(arr,25);  
   cout<<squareroo;                                 
}