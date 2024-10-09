#include<iostream>
using namespace std;
void printarray(int arr[16],int size){
    cout<<"print the array"<<endl;
    for (int i = 0; i < size; i++)

    {
      cout<<arr[i]<<" ";
    }
    



}

int main(){
int arr[16]={1};
int n=10;


printarray(arr, 16);


}