#include<iostream>
#include<stack>
using namespace std;
class mystack{
    public:
    // for dynamically allocate use *arr
    int *arr;
    int top;
    int size;
    mystack(int size){
        // add size of array
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        // check the size of stack
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            
            cout<<"stack overflow"<<endl;
        }

    }
    void pop(){ 
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
 int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

};
int main(){
    mystack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    if(st.isempty()){
        cout<<"stack is empty hai mere dost "<<endl;
    }
    else{
        cout<<"stack empty nahi hai mere dost "<<endl;
    }


}
