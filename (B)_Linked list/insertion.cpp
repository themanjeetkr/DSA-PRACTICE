#include<iostream>
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

// Insert at head
void insertAthead(node*& head, int d) {
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

// Insert at tail
void insertAttail(node*& tail, int d) {
    node* temp = new node(d);
    tail->next = temp;
    tail = temp; // Update tail reference
}

// Print the linked list
void print(node*& head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert at a specific position
void insertatposition(node*& tail, node*& head, int position, int d) {
    if (position == 1) { // Insert at head
        insertAthead(head, d);
        return;
    }

    node* temp = head;
    int count = 1;

    while (count < position - 1 && temp->next != NULL) {
        temp = temp->next;
        count++;
    }

    // If inserting at the last position, update tail
    if (temp->next == NULL) {
        insertAttail(tail, d);
        return;
    }

    // Insert in the middle
    node* nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

int main() {
    // Creating a new node (first node)
    node* node1 = new node(10);

    // Head and tail both point to node1 initially
    node* head = node1;
    node* tail = node1;

    print(head); // Output: 10

    insertAthead(head, 12);
    print(head); // Output: 12 10

    insertAttail(tail, 22);
    print(head); // Output: 12 10 22

    insertatposition(tail, head, 4, 2);
    print(head); // Expected Output: 12 10 2 22

    return 0;
}
