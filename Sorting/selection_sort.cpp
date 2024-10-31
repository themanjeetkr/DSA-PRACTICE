






#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
  for (int i = 0; i < n-1; i++)
  {

    int minindex=i;        //for initial index
    for (int j = i+1; j < n; j++)
    {
      if (arr[i]>arr[j])//compare the value
      {
        
        minindex=j;      //update the initial value 
      }
     
      
    }
     swap(arr[minindex],arr[i]);          //swap the value
    
  }
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<",";  //only one               //print one by one value 
  }
  
  
}



int main(){
  int one[6]={2,4,3,5,7,1};
  selectionsort(one,6);//call the function 





}