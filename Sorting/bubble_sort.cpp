#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for (int i = 1; i < n-1; i++)
    {
       for (int j = 0; j < n-i; j++)
       {
        if (arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
        
       }
       
    }
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<endl;
}

    
}

int main(){
    int arr[7]={ 64, 34, 25, 12, 22, 11, 90 };
    bubble_sort(arr,7);

}