#include<iostream>
using namespace std;

int binary_search(int arr[], int size,int key){
    // starting values
    int start=0;
    int end=size-1;

    // (start+end)/2; this is not a way to find the mid ,integer may be out of range (start+end)/2;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
       if (arr[mid]==key)
       {
        return mid;
       }
       if (arr[mid]<key)
       {
        start=mid+1;
       }
       else{
        end=mid-1;
       }
    //    update mid value 
       
       mid=start+(end-start)/2;
       
       
       
    }
    return -1;
    

}
int main(){
    int arr[6]={2,4,6,8,10,12};
    int key;
    cin>>key; 
    int index=binary_search(arr,6,key);
   if (index!=-1)
   {
    cout<<"The index is:"<<index;
   }
   else{
    cout<<"the index is not found";
   }
   

}