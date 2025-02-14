#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int d){
        this->data=d;
        this->next=NULL;

    }
    ~node(){
        int value =this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node wirh data"<<value;
    }

};

int main(){

}