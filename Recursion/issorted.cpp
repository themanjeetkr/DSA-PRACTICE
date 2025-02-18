#include<iostream>

using namespace std;
bool issorted(int arr[] ,int size ){
    if(size==0||size==1)
    return true;
    if(arr[0]>arr[1])
    return false;
    else{
        // check the sorted or not 
        bool remainingpart=issorted(arr+1,size-1);
        return remainingpart;

    }


}
int main(){
    int arr[5]={2,4,7,6,7};
    int size=5;
    bool ans =issorted(arr,size);
    if(ans){
        cout<<"array is sorted";
    }
    else{
        cout<<"not sorted array";
    }
}