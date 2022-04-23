#include<iostream>
using namespace std;
#include<bits/stdc++.h>
struct Node
{
int data;
Node *left, *right;
Node (int data)
{
left=right=NULL;
this->data=data;
}
};
void inorder(Node *root)
{
if(root==NULL)
return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}
Node *findnode(Node*root, int data)
{
if(root==NULL)
return NULL;
queue<Node *>q;
q.push(root);
while(!q.empty())
{
Node *curr=q.front();
q.pop();
if(curr->data==data)
return curr;
if(curr->left)
q.push(curr->left);
if(curr->right)
q.push(curr->right);
}
return NULL;
}
Node *finddeepestright(Node *root)
{
if(root==NULL)
return NULL;
queue<Node *>q;
q.push(root);
Node *curr;
while(!q.empty())
{
curr=q.front();
q.pop();
if(curr->left)
q.push(curr->left);
if(curr->right)
q.push(curr->right);
}
return curr;
}
Node *deletenode(Node *root,int data)
{
Node *foundnode=findnode(root,data);
Node *deepestrightnode=finddeepestright(root);
if(foundnode)
{
cout<<endl<<"node found "<<foundnode->data;
cout<<endl<<"deepest node "<<deepestrightnode->data;
swap(foundnode->data, deepestrightnode->data);
queue<Node *>q;
q.push(root);
Node *curr;
while(!q.empty())
{
curr=q.front();
q.pop();
if(curr==deepestrightnode)
{
root=NULL;
delete deepestrightnode;
break;
}
if(curr->left)
{
if(curr->left==deepestrightnode)
{
curr->left=NULL;
delete deepestrightnode;
break;
}
else
{
q.push(curr->left);
}
}
if(curr->right)
{
if(curr->right==deepestrightnode)
{
curr->right=NULL;
delete deepestrightnode;
break;
}
else
q.push(curr->right);
}
}
return root;
}
}
int main()
{
Node *root=new Node (1);
root->left=new Node (2);
root->right=new Node (3);
root->left->right=new Node(4);
root->right->left=new Node (5);
cout<<endl<<"Inorder traversal ";
inorder(root);
root=deletenode(root, 2);
cout<<endl<<"Inorder traversal ";
inorder(root);
root=deletenode(root, 4);
cout<<endl<<"Inorder traversal ";
inorder(root);
root=deletenode(root, 1);
cout<<endl<<"Inorder traversal ";
inorder(root);
root=deletenode(root, 3);
cout<<endl<<"Inorder traversal ";
inorder(root);
root=deletenode(root, 5);
cout<<endl<<"Inorder traversal ";
inorder(root);
}