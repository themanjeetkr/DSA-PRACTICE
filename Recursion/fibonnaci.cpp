#include<iostream>
using namespace std;
int fibonnaci(int num){
    if (num==1)
   return 1;
   if(num==0)
   return 0;
   return fibonnaci(num-1)+fibonnaci(num-2);
    
}

int main(){
    int num=5;
    cout<<"the fibonnaci series"<<endl;
    for(int i=0;i<num;i++){
        cout<<fibonnaci(i)<<" ";
    }



}