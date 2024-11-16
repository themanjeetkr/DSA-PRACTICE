#include<iostream>
#include<set>              //set library
using namespace std;

int main(){
    set<int>s;               //initialize set
    s.insert(1);
    s.insert(0);
    s.insert(1);          //insert for to add the value 
    s.insert(0);
    s.insert(1);
    for(auto i:s){
        cout<<i<<endl;
    }

}