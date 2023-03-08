#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define vc                  vector<int>
#define iz(n)               int n; cin>>n;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)

using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int a){
        data=a;
        next=NULL;
    }
    
};


Node* AddFirst(int x,Node* head){
    Node*  temp=new Node(x);
    temp->next=head;
    head=temp;
    return head;
}

Node* AtLast(int x,Node* head){
    
    if(head==NULL){
        Node*temp=new Node(x);
        return temp;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new Node(x);
        return head;
    }
    
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node* head=NULL;
    head=AddFirst(1,head);
    head=AddFirst(2,head);
    head=AtLast(3,head);
    print(head);

    return 0;
    
}