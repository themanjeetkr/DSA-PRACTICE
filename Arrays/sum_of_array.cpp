#include <iostream>

using namespace std;
int main(){
    // taking size of array
    cout<<"enter the size of array:"<<endl;
    int size;
    cin>>size;
    int arr[size];
    int sum=0;

    // taking input from user
    for (int i = 0; i < size; i++)
    {

        cin>>arr[i];
    }
    for (int i = 0; i <size ; i++)
    {
        sum+=arr[i];
    }
    cout<<"the sum of array is :"<<" "<<sum;
    

    
}