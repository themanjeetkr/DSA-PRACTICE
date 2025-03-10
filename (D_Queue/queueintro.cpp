#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;

    q.push(10);
    q.push(3);
    q.push(10);
    cout<<"size of queue is :"<<q.size()<<endl;
    q.pop();
    cout<<"sze of queue is :"<<q.size()<<endl;
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
}
