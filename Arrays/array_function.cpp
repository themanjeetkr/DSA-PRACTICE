#include<iostream>
using namespace std;
// syntax of argument
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

// syntax of call function 
printarray(arr, 16);  


}