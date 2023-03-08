#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

#define ll                  long long int 
#define llmin               -1e18
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define take(a,n)           vector <int> a; for(int i=0;i<n;i++){int aa; cin>>aa; a.pb(aa);}
#define vll                 vector<ll> 
#define full(a)             (a.begin(),a.end())
#define vc                  vector<char>
#define iz(n)               int n; cin>>n;
#define iz2(n,m)             int n,m; cin>>n>>m;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)
#define pq                  priority_queue <int, vector<int>, greater<int> >

struct Node 
{ 
    int data; 
    struct Node* left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 

int height(Node *root){
    if(root==NULL){
        return 0;
    }

    int lh=height(root->left);
    int rh=height(root->right);

    return (1+(max(lh,rh)));

}

void preOrder(Node *root)
{
    if (root == NULL)
        return;

    stack<Node *> nodeStack;
    nodeStack.push(root);

    while (nodeStack.empty() == false)
    {
        Node *node = nodeStack.top();
        printf("%d ", node->data);
        nodeStack.pop();

        if (node->right)
            nodeStack.push(node->right);
        if (node->left)
            nodeStack.push(node->left);
    }
}

void inOrder(Node *root)
{
    stack<Node *> s;
    Node *curr = root;

    while (curr != NULL || s.empty() == false)
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();

        cout << curr->data << " ";

        curr = curr->right;
    }
}

void postOrderIterative(Node* root) 
{ 
    if (root == NULL) 
        return; 
  
    stack<Node *> s1, s2; 
  
    s1.push(root); 
    Node* node; 
  
    while (!s1.empty()) { 
        node = s1.top(); 
        s1.pop(); 
        s2.push(node); 
  
        if (node->left) 
            s1.push(node->left); 
        if (node->right) 
            s1.push(node->right); 
    } 
  
    while (!s2.empty()) { 
        node = s2.top(); 
        s2.pop(); 
        cout << node->data << " "; 
    } 
} 



void levelOrder(Node *root){
    if(!root) return;
   queue <Node*> q;
   q.push(root);

    while(q.size()){

        int size=q.size();
        while(size--){
            Node *curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }

    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    struct Node *root = new Node(1); 
    root->left             = new Node(2); 
    root->right         = new Node(3); 
    root->left->left     = new Node(4); 
    root->left->right = new Node(5);  

    levelOrder(root);
    return 0;
}