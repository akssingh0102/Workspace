#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *insertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL)return temp;
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
    
}

Node *insertBegin(Node *head,int x){
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
    
}

void removeDublicate(Node *head){
    Node *curr = head;
    while(curr && curr->next){
        if(curr->data == curr->next->data){
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete(temp);
        }
        else{
            curr = curr->next;
        }
    }
}

int main() 
{ 
	Node *head=new Node(10);
	insertEnd(head,20);
    insertEnd(head,20);
    insertEnd(head,30);
    insertEnd(head,30);
    insertEnd(head,30);

    cout<<"Before removing dublicates :"<<endl;
    printlist(head);

    removeDublicate(head);

    cout<<"After removing dublicate :"<<endl;
    printlist(head);

	return 0;
} 
