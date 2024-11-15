#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<int> v;
        cout<<"the capacity ->"<<v.capacity()<<endl;
        v.push_back(1);
        cout<<"capacity->"<<v.capacity()<<endl;

        v.push_back(2);
        cout<<"capacity->"<<v.capacity()<<endl;
        
        v.push_back(3);
        cout<<"capacity->"<<v.capacity()<<endl;

        cout<<"capacity->"<<v.capacity()<<endl;
        cout<<"size->"<<v.size()<<endl;


        cout<<"element at 2nd index"<<v.at(2)<<endl;

        cout<<"the front elementis"<<v.front()<<endl;
        cout<<"the back element is "<<v.back()<<endl;

}
