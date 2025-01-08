#include<iostream>
using namespace std;
bool linearssearch(int arr[],int size,int k){
    //base size
    if(size==0)
    return false;
    if(arr[0]==k)
    return true;
    else{
        bool remainingpart=linearssearch(arr+1,size-1,k);
        return remainingpart;
    }
}
int main(){
    int arr[5]={2,34,5,5,4};
    int size=5;
    int key=4;
    bool ans=linearssearch(arr,size,key);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
}