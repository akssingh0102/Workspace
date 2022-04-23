#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define vc                  vector<char>
#define iz(n)               int n; cin>>n;
#define iz2(n,m)             int n,m; cin>>n>>m;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)

using namespace std;
struct node{
node *next;
int data;
node(int x){
    int data=x;
    next=NULL;
}
};
void enque(node *front,node *rear,int x){   
    node *temp=new node(x);
    if(front==NULL){
        front=temp;
        rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}

void deque(node *front,node *rear){
    if(front==NULL){
        cout<<"Underflow"<<endl;
    }
    else
    {
        node *temp=front;
        front=front->next;
        cout<<temp->data<<endl;
        delete temp;
        if(front==NULL) rear=NULL;
    }
    
}

void frontt(node *front,node *rear){
    if(front==NULL){
        return ;
    }
    cout<<front->data<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node *front=NULL;
    node *rear=NULL;
    enque(front,rear,1);
    frontt(front,rear);
    return 0;
}