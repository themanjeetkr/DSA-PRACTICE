#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

// Function to insert a node at the tail
void insertAttail(node*& tail, int d) {
    node* temp = new node(d);
    tail->next = temp;
    tail = temp; // Update the tail reference
}

// Function to print the linked list
void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";  //print the data 
        
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Creating the first node
    node* node1 = new node(10);

    // Head and tail both point to the first node
    node* head = node1;
    node* tail = node1;

    // Insert at the tail
    insertAttail(tail, 20);
    insertAttail(tail, 30);
    insertAttail(tail, 40);

    // Print the linked list
    print(head);//call head

    return 0;
}
