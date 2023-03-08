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
    struct Node *left, *right;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

bool isFull(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }

    if (root->left && root->right && isFull(root->left) && isFull(root->right))
    {
        return true;
    }
    // cout<<root->data;
    return false;
}

bool isPerfect(Node *root){
    if(root == NULL){
        return true;
    }
    queue<Node*> q;
    q.push(root);
    bool flag=true;
    int levelNodeCount=1;
    while (q.size())
    {
        int sizee=q.size();
        if(sizee != ((pow(2,levelNodeCount)-1)-(pow(2,levelNodeCount-1)-1))){
            // int data=q.front()->data;
            // cout<<(data);
            // return false;
            flag=false;
            break;
            // cout<<sizee<<" "<<(pow(2,levelNodeCount)-1);
        }

        while(sizee--){
            Node *curr=q.front();
            q.pop();
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
            // if(!flag){
            //     cout<<endl<<curr->data;
            // }

        }
        levelNodeCount++;
    }
    return flag;
    

}


int height(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    int left=height(root->left);
    int right=height(root->right);

    return 1+max(left,right);
}


bool isBalance(Node *root){
    if(abs(height(root->left)-height(root->right)) <=1){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    struct Node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    // TO check full binary tree
    if(isFull(root)){
        cout<<"FULL BINARY TREE"<<endl;
    }
    else{
        cout<<"Not a Full Binary Tree"<<endl;
    }

    // To Check Perfect Binary Tree
    if(isPerfect(root)){
        cout<<"Perfect Binary Tree"<<endl;
    }
    else{
        cout<<"Not a perfect binary Tree"<<endl;
    }

    // To check balance Binary Tree
    if(isBalance(root)){
        cout<<"Balanced Binary Tree"<<endl;
    }
    else{
        cout<<"Not a balanced Binary Tree"<<endl;
    }



    
    return 0;
}