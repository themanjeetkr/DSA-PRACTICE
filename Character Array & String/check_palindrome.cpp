#include<iostream>
using namespace std;

bool check_palindrome(char name[],int n){ //return boolean 
    int s=0;
    int e=n-1;
   while (s<=e)/// check starting and endling value 
   
   {
   if (name[s]!=name[e]) //Check first charactor and last charactor are the same 
   {
    return 0;
   }
   else{
    s++;
    e--;

   }
   
   
   }
   return 1;//return if not found 
   
    
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