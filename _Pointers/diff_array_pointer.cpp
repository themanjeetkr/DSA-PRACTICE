#include<iostream>
using namespace std;

int main(){
     int temp[10] = {1,2};
   cout << sizeof(temp) << endl;
   cout << " 1st " <<  sizeof(*temp) << endl;
   cout << " 2nd " <<  sizeof(&temp) << endl;

   int *ptr = &temp[0];
   cout << sizeof(ptr) << endl ;//pointer size is 8 bytes 
   
   cout << sizeof(*ptr) << endl ;
   cout << sizeof(&ptr) << endl ;
}
