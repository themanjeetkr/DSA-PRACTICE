#include<iostream>

using namespace std;

 int main(){
     int i=5;
     int &j=i;        //&j used for reference value 
     cout<<i<<endl;     //before
     i++;          
      cout<<i<<endl;// 
      j++;
       cout<<i<<endl;//new value 
 }