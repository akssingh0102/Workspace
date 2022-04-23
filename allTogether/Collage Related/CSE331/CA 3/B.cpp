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

unordered_map<int,int> mp;

class BST
{
   
 
public:
    int data;
    BST *left, *right;
    BST();
 
    BST(int);
 
    BST* Insert(BST*, int);
 
    void Inorder(BST*);
};
 
BST ::BST()
    : data(0)
    , left(NULL)
    , right(NULL)
{
}
 
BST ::BST(int value)
{
    data = value;
    left = right = NULL;
}
 
BST* BST ::Insert(BST* root, int value)
{
    mp[value]++;
    if (!root)
    {
        return new BST(value);
    }
 
    if (value >= root->data)
    {
        root->right = Insert(root->right, value);
    }
    else
    {
        root->left = Insert(root->left, value);
    }
 
    return root;
}
 
void BST ::Inorder(BST* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}
 

int justLarge(BST* root,int val){
    BST *first=root;
    while (root)
    {
        if(root==NULL){
            return -1;
        }
        if(root->data > val){
            return root->data;
        }
        else if(root->data <= val){
            root=root->right;
        }
        
    }
    return -1;
    
}

int justSmall(BST* root,int val){
    BST *first=root;
    while (root)
    {
        if(root==NULL){
            return -1;
        }
        if(root->data < val){
            return root->data;
        }
        else if(root->data >= val){
            root=root->left;
        }
        
    }
    return -1;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;

     BST b, *root = NULL;
     int a;
     cin>>a;
    root = b.Insert(root, a);
    for (int i = 0; i < n-1; i++)
    {
        iz(data)
        b.Insert(root,data);
    }
    
 
    int query;
    cin>>query;
    while (query--)
    {
        /* code */
        iz(data)
        if(data==1){
            iz(a)
            b.Insert(root,a);

        }
        else if(data==2){
            iz(a)
            cout<<mp[a]<<endl;
        }
        else if(data==3){
            iz(a)
            cout<<justLarge(root,a)<<endl;

        }
        else{
            iz(a)
            cout<<justSmall(root,a)<<endl;
        }

    }
    
    return 0;
}
