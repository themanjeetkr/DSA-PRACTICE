#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*prev;
    node*next;
    node(int d){
        this->data=d;
        this->prev=   NULL;
        this->next=NULL;
    }
};
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;


    }
    cout<<endl;
}
    int getlength(node* head){
        int len=0;
        node*temp=head;
        while (temp!=NULL)
        {
            /* code */
            len++;
            temp=temp->next;


        }
        return len;
        
    }
    // insert at head
     void insertAthead(node* &head,int d){
        node*temp=new node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;


    } //insert at tail
    void insertattail(node*& tail,int d){
        node*temp=new node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;



    }
    //insert at any position 
    void insertatposition(node*head, node*&tail,int position,int d){
      if(position==1)
      {
        insertAthead(head,d);
      }
    node* temp=head;
    int cnt=0;
    while (cnt<position-1)
    {
        /* code */
        temp=temp->next;
        cnt++;
    }
    if (temp->next=NULL)
    {
        /* code */
        insertattail(tail,d);
        return;
    }
    node*nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
    
    
    }


int main(){
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    print(head);
    cout<<getlength(head)<<endl;

    insertAthead(head,14);
    print(head);

    insertAthead(head,15);
    print(head);
    insertAthead(head,100);
    print(head);
    insertattail(tail,25);
    print(head);
    insertatposition(head,tail,23,2);
}