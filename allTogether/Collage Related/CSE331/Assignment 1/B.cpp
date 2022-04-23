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

struct Node{
    char data;
    Node *left;
    Node *right;
    Node(int x){
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertLevelOrder(char arr[], Node* root, 
                       int i, int n) 
{ 
    if (i < n) 
    { 
        if(arr[i]=='#'){
            return NULL;
        }
        Node* temp = new Node(arr[i]); 
        root = temp; 
  
        root->left = insertLevelOrder(arr, 
                   root->left, 2 * i + 1, n); 
  
        root->right = insertLevelOrder(arr, 
                  root->right, 2 * i + 2, n); 
    } 
    return root; 
} 

int findMax(Node *root,int &maxx){
    if(!root){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        char aa=root->data;
        if(aa =='a' || aa =='e' || aa=='i' || aa=='o' || aa=='u'){
            return 1;
        }
        else{
            return 0;
        }
    }
    int l=findMax(root->left,maxx);
    int r=findMax(root->right,maxx);

    char aa=root->data;
        if(aa =='a' || aa =='e' || aa=='i' || aa=='o' || aa=='u'){
            maxx=max(maxx,(max(l,r))+1);
        }

    if(l>0 || r>0){
        return max(l,r)+1;
    }
    return maxx;

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
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    
    Node *root=insertLevelOrder(a,root,0,n);

    int maxx;
    cout<<findMax(root,maxx);
    
    return 0;
}