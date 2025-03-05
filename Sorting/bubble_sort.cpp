#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for (int i = 1; i < n-1; i++)// starting from index 1
    
    {
       for (int j = 0; j < n-i; j++) // compare with index 0
       {
        if (arr[j]>arr[j+1]) //compare index 1 with index 0
        {
            swap(arr[j],arr[j+1]);//swap the values
        }
        
       }
       
    }
for (int i = 0; i < n; i++)
{
    // print the array 
    cout<<arr[i];
}

    
}

int main(){
    int arr[7]={ 64, 34, 25, 12, 22, 11, 90 };
    bubble_sort(arr,7);

}