#include <iostream>
using namespace std;

class node {
public:

// data and address of next 
    int data;
    node *next;
    
    node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory is freed for node with data " << value << endl;
    }
};

// Function to insert a node after a given element in a circular linked list
void insertNode(node *&tail, int element, int d) {
    if (tail == NULL) {
        // Empty list case: create a new node and link it to itself
        node *newnode = new node(d);
        tail = newnode;
        newnode->next = newnode;
    } else {
        // Find the node with value `element`
        node *curr = tail;
        while(curr->data!=element){
            curr=curr->next;
        }

        // Insert the new node after `curr`
        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// Function to print the circular linked list
void print(node *tail) {
    if (tail == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    
    node *temp = tail;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    
    cout << endl;
}

int main() {
    node *tail = NULL;

    // Insert into an empty list
    insertNode(tail, 0, 10);  // First node (since list is empty, `element` is ignored)
    print(tail);  // Output: 10

    // Insert after 10
    insertNode(tail, 10, 20);
    print(tail);  // Output: 10 20

    // Insert after 20
    insertNode(tail, 20, 30);
    print(tail);  // Output: 10 20 30
    insertNode(tail, 10, 7);
    print(tail);

    return 0;
}
 