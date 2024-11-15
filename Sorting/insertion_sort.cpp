#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
        int j= i-1;
        for (; j>=0; j--)
        {
          if (arr[j]>temp)
          {
            arr[j+1]=arr[j];
          }
          else{
            break;
          }
          
          
        }
        arr[j+1]=temp;


        
    }
    for (int l = 0;  l< n; l++)
    {
    cout<<arr[l];
    }
    
    
}

int main(){
int even[4]={4,2,1,3};
insertion_sort(even,4);

}