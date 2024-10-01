#include<iostream>
using namespace std;

int main(){
    int num=2;
    switch (num)
    {
    case 1:
      cout<<"one";
        break;
        case 2:
        cout<<"two";
        break;
        case 3:
        cout<<"three";
    
    default:cout<<"out of range";
        break;
    }
}