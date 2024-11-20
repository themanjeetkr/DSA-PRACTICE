#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
        int count=0;
        for (int i = 1; i <n; i++)
        {
            if (arr[i-1]>arr[i])
            {
              count++;
            }
            
            
        }
        if (arr[n-1]<arr[0])   // for last value 
        {
           count++;
        }
        return count<=1;//check true of false 
        
        


}



int main(){
    int arr[5]={3,4,5,1,2};
   int check= sorted(arr,5);

   if (check)
   {
    cout<<"the array is sorted ";
   }
   else{
    cout<<"not sorted ";
   }
   
    

}