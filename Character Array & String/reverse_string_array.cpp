#include<iostream>
using namespace std;



void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        swap(name[s++],name[e --]);
    }
    
}
int getlength(char name[]){
    int count=0;
    for (int i = 0; i < name[i]!=0; i++)
    {
        count++;    //count every number of alphabet
    }
    return count;
    
}

int main(){
    char name[20];
    cin>>name;
    int len=getlength(name);

    cout<<"the length of  character array is"<<getlength(name);
    reverse(name,len);
    cout<<"your name is "<<name;

}