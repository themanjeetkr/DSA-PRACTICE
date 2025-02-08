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
        cout<<"i am A"<<endl;
    }
};
class C:public A,public B{

};

int main(){
    C oj1;
    //inheritence ambiguity
    oj1.A::fun();
    
}