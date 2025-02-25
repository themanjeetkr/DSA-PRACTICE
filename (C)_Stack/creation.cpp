#include<iostream>
#include<stack>
using namespace std;
int main(){
    // creation of stack
    stack<int>s;
// PUSH THE VALUE
    s.push(2);
    s.push(3);
    //POP
    s.pop();

    cout<<"printing top element"<<s.top()<<endl;
    if (s.empty())
    {
        /* code */
        cout<<"stack is empty "<<endl;
    }
    else{
        // return the empty 
        cout<<"stack is not empty"<<endl;
    } 

    // print size of stack
    cout<<"size of stack is "<<s.size()<<endl;  
    


}