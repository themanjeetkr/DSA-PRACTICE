#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"i am A"<<endl;
    }
};
class B{
    public:
    void fun(){
        cout<<"i am B"<<endl;
    }
};
class C:public A,public B{

};

int main(){
    C oj1;
    //inheritence ambiguity      // for avoiding confusion of compiler 
    oj1.A::fun();
    oj1.B::fun();
    
}