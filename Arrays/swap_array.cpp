#include<iostream>
using namespace std;
void swap(int arr[], int size){
for (int i = 0; i < size; i+=2)
{
    if (i+1 <size)
    {
    swap(arr[i], arr[i+1]);
        
    }
    
    
}
for (int i = 0; i < size; i++)
{
  cout<<arr[i]<<" ";
}
}





int main(){
    int even[8]={2,3,21,23,43,23,23,23};
    swap(even,8);

}