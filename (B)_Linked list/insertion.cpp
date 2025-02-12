#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int value){
        this->data=value;
        this->next=NULL;

    }

};
void insertAthead(node* &head,int d){
    node*temp=new node(d);
    temp->next=head;
    head=temp;
    
}
void print(node *&head){
       node*temp=head;
         while (temp!=NULL)
         {
            /* code */
            cout<<temp->data<<endl;
            temp=temp->next;    
         }
        }
         
void insertatposition(node*& head,int position ,int d){
    node* temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;

    };
    node*nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
    


}

int main(){

    // creation of new node
    node* node1=new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    
    // head pointed to node 1
    node*head=node1;
    print(head);

    insertAthead(head,12);

    print(head);
    // insertAthead(head,15);
    // print(head);
    insertatposition(head,2,2);
    print(head);


}