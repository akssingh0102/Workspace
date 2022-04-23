#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

// Iterative function to do Preorder traversal of the tree
void preorderIterative(Node *root)
{
    if (root == NULL)
        return;

    stack<Node *> st;

    // start from root node (set current node to root node)
    st.push(root);

   
    while (!st.empty())
    {

        Node *curr = st.top();
        cout << curr->data<<" ";
        st.pop();

        if (curr->right)
            st.push(curr->right);
        if (curr->left)
            st.push(curr->left);
    }
}

// Driver Code
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->left->left = new Node(70);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->left->left->right = new Node(80);

    preorderIterative(root);

    return 0;
}
