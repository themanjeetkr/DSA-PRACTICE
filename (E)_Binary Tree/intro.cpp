#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildtree(node* root) {
    cout << "Enter the data: ";
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new node(data);

    cout << "Enter data for inserting in left" << endl;
    root->left = buildtree(root->left);

    cout << "Enter data for inserting in right" << endl;
    root->right = buildtree(root->right);

    return root;
}

void levelorder(node* root) {
    if (root == NULL) {  // Null check added
        cout << "Tree is empty!" << endl;
        return;
    }

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        cout << temp->data << " ";  // Better inline output
        q.pop();

        if (temp->left) {
            q.push(temp->left);
        }
        if (temp->right) {
            q.push(temp->right);
        }
    }
    cout << endl;
}

int main() {
    node* root = NULL;
    root = buildtree(root);
    cout << "Level Order Traversal: ";
    levelorder(root);

    return 0;
}
