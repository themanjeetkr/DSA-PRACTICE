#include<iostream>

using namespace std;
int firstocc(int arr[],int n, int key){
    int start=0, end=n-1;
    int ans=0;


    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
            
        }
        else if (key<arr[mid])
        {
            end=mid-1;

        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
        
        
    }
    return ans;
    
}
int lastocc(int arr[],int n, int key){
    int start=0, end=n-1;
    int ans=0;


    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
            
        }
        else if (key<arr[mid])
        {
            end=mid-1;

        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;    
        
        
    }
    return ans;
    
}

int main(){
int even[5]={1,4,5,5,5};
int first=firstocc(even,5,5);
int last=lastocc(even,5,5);
cout<<"the first occurence is at index :"<<first<<endl;
cout<<"the last occurence of 5 is index :   "<<last;



}