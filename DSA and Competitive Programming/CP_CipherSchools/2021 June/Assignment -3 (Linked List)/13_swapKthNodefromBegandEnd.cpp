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
    int data;
    Node* next;
    Node(){
        Node(0);
    }
    Node(int x){
        data=x;
        next=NULL;
    }
};

void addAtEnd(Node **head,int x){
    Node *curr=*head;
    Node *temp=new Node(x);
    if(curr==NULL){
        *head=temp;
    }
    else{
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
    }
}
void addAtFront(Node **head,int x){
    Node *temp=new Node(x);
    if(*head==NULL){
        *head=temp;
    }
    else{
        temp->next=*head;
        *head=temp;
    }

}

void printAll(Node **head){
    Node *curr=*head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

bool idEmpty(Node **head){
    if(*head==NULL){
        return true;
    }
    else{
        return false;
    }
}

int countNodes(struct Node* s) 
{ 
    int count = 0; 
    while (s != NULL) { 
        count++; 
        s = s->next; 
    } 
    return count; 
} 
  
void swapKth(struct Node** head_ref, int k) 
{ 
    int n = countNodes(*head_ref); 
  
    if (n < k) 
        return; 
  
    if (2 * k - 1 == n) 
        return; 
  
    Node* x = *head_ref; 
    Node* x_prev = NULL; 
    for (int i = 1; i < k; i++) { 
        x_prev = x; 
        x = x->next; 
    } 
  
    Node* y = *head_ref; 
    Node* y_prev = NULL; 
    for (int i = 1; i < n - k + 1; i++) { 
        y_prev = y; 
        y = y->next; 
    } 

    if (x_prev) 
        x_prev->next = y; 
  
    if (y_prev) 
        y_prev->next = x; 
  
    Node* temp = x->next; 
    x->next = y->next; 
    y->next = temp; 
  
    if (k == 1) 
        *head_ref = y; 
    if (k == n) 
        *head_ref = x; 
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    
    return 0;
}