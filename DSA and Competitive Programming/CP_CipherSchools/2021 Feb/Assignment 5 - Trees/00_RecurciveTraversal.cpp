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

void preOrder(Node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data;
    preOrder(head->left);
    preOrder(head->right);

}

void inOrder(Node *head){
    if(head==NULL){
        return;
    }
    inOrder(head->left);
    cout<<head->data;
    inOrder(head->right);
}

void postOrder(Node *head){
    if(head==NULL){
        return;
    }

    postOrder(head->left);
    postOrder(head->right);
    cout<<head->data;

}

void levelOrderHelper(Node *root,int level,int curr_level){

    if(root==NULL) return;
    if(curr_level == level){
        cout<<root->data<<" ";
    }

    levelOrderHelper(root->left,level,curr_level+1);
    levelOrderHelper(root->right,level,curr_level+1);

}

void levelOrder(Node *root){

    int h=height(root);

    for (int i = 0; i < h; i++)
    {
        levelOrderHelper(root,i,0);
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