#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* prev;
    node* next;
    
    node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getlength(node* head) {
    int len = 0;
    node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

// Insert at head
void insertAthead(node*& head, int d) {
    node* temp = new node(d);
    if (head != NULL) { 
        temp->next = head;
        head->prev = temp;
    }
    head = temp;
}

// Insert at tail
void insertattail(node*& tail, int d) {
    node* temp = new node(d);
    if (tail != NULL) {
        tail->next = temp;
        temp->prev = tail;
    }
    tail = temp;
}

// Insert at any position
void insertatposition(node*& head, node*& tail, int position, int d) {
    if (position == 1) {
        insertAthead(head, d);
        return;
    }

    node* temp = head;
    int cnt = 1;

    while (cnt < position - 1 && temp->next != NULL) {
        temp = temp->next;
        cnt++;
    }

    // If inserting at the last position
    if (temp->next == NULL) {
        insertattail(tail, d);
        return;
    }

    node* nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = nodetoinsert;
    }
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

int main() {
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    print(head);
    cout << "Length: " << getlength(head) << endl;

    insertAthead(head, 14);
    print(head);

    insertAthead(head, 15);
    print(head);

    insertAthead(head, 100);
    print(head);

    insertattail(tail, 25);
    print(head);

    insertatposition(head, tail, 2, 2);
    print(head);

    return 0;
}
