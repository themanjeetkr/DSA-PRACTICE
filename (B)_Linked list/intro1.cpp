#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    //constructed call
    node(int value){
        this->data=value;
        this->next=NULL;

    }
};

int main(){

    // creation of new node
    node* node1=new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

}