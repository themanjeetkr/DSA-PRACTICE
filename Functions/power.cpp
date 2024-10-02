#include<iostream>

using namespace std;

int pow(int c,int d){
    int ans=1;
    for (int i = 1; i <= d; i++)
    {
        ans=ans*c;
    }
    return ans;
    
}




int main(){
  int a;
  cout<<"enter the number"<<endl;
  cin>>a;
  int b;
  cout<<"enter the number"<<endl;
  cin>>b;
  int answer=pow(a,b);
  cout<<"the value is :"<<answer;
}