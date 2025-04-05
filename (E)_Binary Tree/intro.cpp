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

// Build tree using recursive input (not used in main for now)
node* buildtree(node* root) {
    cout << "Enter the data: ";
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new node(data);

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildtree(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildtree(root->right);

    return root;
}

// Level order traversal
void levelorder(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

// Preorder traversal
void preorder(node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder traversal
void postorder(node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Build tree from level order input
node* buildfromlevelorder(node* root) {
    queue<node*> q;
    cout << "Enter data for root: ";
    int data;
    cin >> data;

    root = new node(data);
    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter the left node for " << temp->data << ": ";
        int leftdata;
        cin >> leftdata;
        if (leftdata != -1) {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "Enter the right node for " << temp->data << ": ";
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1) {
            temp->right = new node(rightdata); // ✅ fixed variable
            q.push(temp->right);
        }
    }

    return root; // ✅ return root
}

int main() {
    node* root = NULL;

    root = buildfromlevelorder(root); // ✅ assign returned tree root

    cout << "\nLevel Order Traversal:\n";
    levelorder(root);

    cout << "\nPreorder Traversal:\n";
    preorder(root);

    cout << "\nPostorder Traversal:\n";
    postorder(root);

    return 0;
}
