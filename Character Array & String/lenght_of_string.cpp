#include<iostream>
using namespace std;
int getlength(char name[]){
    int count=0;
    for (int i = 0; i < name[i]!=0; i++)
    {
        count++;
    }
    return count;
    
}

int main(){
    char name[20];
    cin>>name;
    cout<<"the length of  character array is"<<getlength(name);

}