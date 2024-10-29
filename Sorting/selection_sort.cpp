






#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
  for (int i = 0; i < n-1; i++)
  {
    int min=i;
    for (int j = i+1; j < n; j++)
    {
      if (arr[i]>arr[j])
      {
        min=j;
      }
     
      
    }
     swap(arr[min],arr[i]);
    
  }
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<",";
  }
  
  
}



int main(){
  int one[6]={2,4,3,5,7,1};
  selectionsort(one,6);




}