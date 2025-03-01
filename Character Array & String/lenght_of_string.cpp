#include<iostream>
using namespace std;
int getlength(char name[]){
    int count=0;
    for (int i = 0; i < name[i]!=0; i++)
    {
    count++;   // increase the no of element one by one 
    }
    // it return the count
    return count;
    
}

int main(){
    char name[20];
    cin>>name;
    //  store the value of count
    cout<<"the length of  character array is"<<getlength(name);//call the function 

}