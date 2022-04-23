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


class node { 
public: 
	int data; 
	node* left; 
	node* right; 
	node* nextRight; 

	node(int data) 
	{ 
		this->data = data; 
		this->left = NULL; 
		this->right = NULL; 
		this->nextRight = NULL; 
	} 
}; 

void connectRecur(node* p); 

void connect(node* p) 
{ 
	p->nextRight = NULL; 

	connectRecur(p); 
} 

void connectRecur(node* p) 
{ 
	if (!p) 
		return; 

	if (p->left) 
		p->left->nextRight = p->right; 

	if (p->right) 
		p->right->nextRight = (p->nextRight) ? p->nextRight->left : NULL; 

	connectRecur(p->left); 
	connectRecur(p->right); 
} 

int main() 
{ 

	node* root = new node(10); 
	root->left = new node(8); 
	root->right = new node(2); 
	root->left->left = new node(3); 

	connect(root); 

	cout << "Following are populated nextRight pointers in the tree"
			" (-1 is printed if there is no nextRight)\n"; 
	cout << "nextRight of " << root->data << " is "
		<< (root->nextRight ? root->nextRight->data : -1) << endl; 
	cout << "nextRight of " << root->left->data << " is "
		<< (root->left->nextRight ? root->left->nextRight->data : -1) << endl; 
	cout << "nextRight of " << root->right->data << " is "
		<< (root->right->nextRight ? root->right->nextRight->data : -1) << endl; 
	cout << "nextRight of " << root->left->left->data << " is "
		<< (root->left->left->nextRight ? root->left->left->nextRight->data : -1) << endl; 
	return 0; 
} 


