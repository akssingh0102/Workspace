#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

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

void reverse(){
    Node *curr,*prev,*nxt;
    if(head==NULL || head->next==NULL){
        return;
    }
    else{
        curr=head;
        prev=NULL;
        nxt=curr->next;
        while(curr!=NULL){
            curr->next=prev;
            prev=curr;
            curr=nxt;
            if(nxt!=NULL)
            nxt=nxt->next;
            else{
                break;
            }
        }
        head=prev;
    }

}   

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    addAtEnd(1);
    addAtEnd(2);
    addAtEnd(3);
    addAtEnd(4);
    addAtEnd(5);
    addAtFront(10);
    cout<<"Before Reverse:"<<endl;
    printAll();
    reverse();
    cout<<endl<<"After reverse:"<<endl;
    printAll();



    
    
    return 0;
}

