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
}*head=NULL;

void addAtEnd(int x){
    Node *curr=head;
    Node *temp=new Node(x);
    if(curr==NULL){
        head=temp;
    }
    else{
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
    }
}
void addAtFront(int x){
    Node *temp=new Node(x);
    if(head==NULL){
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }

}

void printAll(){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

bool idEmpty(){
    if(head==NULL){
        return true;
    }
    else{
        return false;
    }
}

void deleteFromBeg(){
    if(head==NULL){
        return;
    }
    else if(head->next ==NULL){
        head=NULL;
    }
    else{
        Node *curr=head;
        head=head->next;
        delete curr;
    }
}

void deleteFromLast(){
    if(head==NULL){
        return;
    }
    else if(head->next ==NULL){
        head=NULL;
    }
    else{
        Node *prev=NULL;
        Node *curr=head;
        while(curr->next!=NULL){
            prev=curr;
            curr=curr->next;
        }
        delete curr;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    
    
    
    return 0;
}