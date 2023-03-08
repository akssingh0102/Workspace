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
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)

using namespace std;
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data=x;
        next=NULL;
    }

    void push(int x,Node* head){
        Node *temp=new Node(x);
        if(head==NULL){
            head=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
    }

    int pop(Node* head){
        if(isEmpty(head)){
            return -1;
        }
        else{
            int topp=head->data;
            head=head->next;
            return topp;
        }
    }

    void display(Node* head){
        Node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
        }
        cout<<endl;
        
    }

    int top(Node* head){
        if(isEmpty(head)){
            return -1;
        }
        else
        {
            return head->data;
        }
        
    }

    bool isEmpty(Node* head){
        if(head==NULL){
            return true;
        }
        return false;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node *head;
    head=NULL;
    while (1)
    {
        cout<<"1 to push"<<endl<<"2 to pop"<<endl<<"3 to Display"<<endl<<"4 for top"<<endl<<endl;
        int a;
        cin>>a;
        if(a==1){
            int aaa;
            cin>>aaa;
            head->push(aaa,head);
        }
        else if(a==2){
            head->pop(head);
        }
        else if(a==3){
            head->display(head);
        }
        else if(a==4){
            head->top(head);
        }
        else
        {
            return 0;
        }
        
    }
    


}