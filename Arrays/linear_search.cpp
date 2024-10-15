#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){

  for (int i = 0; i < size; i++)
  {
    if (arr[i]==key)
    {
        return 1;
    }
    
    
  }
  return 0;
  }
  

int main(){
     int arr[10]={1,2,45,23,24,23,43};
     cout<<"enter the number you want to search:"<<endl;
     int key;
     cin>>key;
     int found=search(arr,10,key);
     if (found)
     {
       cout<<"key is present"<<endl;
     }
     else{
        cout<<"key is not found"<<endl;
     }
     


}