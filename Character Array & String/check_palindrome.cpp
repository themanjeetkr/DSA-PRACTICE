#include<iostream>
using namespace std;

bool check_palindrome(char name[],int n){
    int s=0;
    int e=n-1;
   while (s<=e)
   {
   if (name[s]!=name[e])
   {
    return 0;
   }
   else{
    s++;
    e--;

   }
   
   
   }
   return 1;
   
    
}



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
        count++;
    }
    return count;
    
}

int main(){
    char name[20];
    cin>>name;
    int len=getlength(name);

    cout<<"the length of  character array is"<<getlength(name)<<endl;
    reverse(name,len);
    cout<<"your name is "<<name<<endl;

     bool is_palindrome=check_palindrome(name,len);
     if (is_palindrome)
     {
       cout<<"your name is palindrome"<<endl;
     }
     else{
           cout<<"your name  is nor palindrome "<<endl;
     }
     

     

    

}