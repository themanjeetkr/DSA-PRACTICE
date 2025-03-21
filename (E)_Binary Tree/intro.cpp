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

    cout << "Enter data for inserting in left" << data<<endl;
    root->left = buildtree(root->left);

    cout << "Enter data for inserting in right" <<data<<endl;
    root->right = buildtree(root->right);

    return root;
}

void levelorder(node* root) {
    if (root == NULL) {
        cout << "Tree is empty!" << endl;
        return;
    }

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        cout << temp->data << " ";
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

// Correct placement of preorder function
void preorder(node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}
node* buildfromlevelorder(node* root){
    queue<node*>q;
    cout<<"enter data for root "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while (!q.empty())
    {
        /* code */
        node*temp=q.front();
        q.pop();
        cout<<"enter the left node for "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new node(leftdata);
            // push temp
            q.push(temp->left);
        }
        cout<<"enter the right node for "<<temp->data<<endl;
        int right;
        cin>>right;
        if(right!=-1){
            temp->right=new node(leftdata);
            q.push(temp->right);
        }
    }
    

}

int main() {
    node* root = NULL;
    // root = buildtree(root);
    // cout << "Level Order Traversal: ";
    // levelorder(root);

    // cout << "Preorder Traversal: "<<endl;
    // preorder(root);
    // cout<<"postorder Traversal"<<endl;
    // postorder(root);

    // return 0;
    buildfromlevelorder(root);
}
