#include<iostream>
using namespace std;

void update(int &j){ //&j is reference variable
    j++;   
}

int main(){
    int n=5;
    cout<<"before "<<n<<endl;
   update(n);     //update the value 
   cout<<"after"<<n;
 
}