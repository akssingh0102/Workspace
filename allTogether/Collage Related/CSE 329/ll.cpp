#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *newnode(int data)
{
   node *temp=new node;
   temp->data=data;
   temp->next=NULL;
   return temp;
}
void print(node *curr
)
{
    while(curr!=NULL)
    {
        cout<<curr->data<<"  ";
        curr=curr->next;
    }
}

void addfirst(node **head, int data)
{
    node *temp=newnode(data);
    temp->next=*head;
    *head=temp;
}

void addlast(node **head, int data)
{
    if(*head==NULL)
    {
        *head=newnode(data);
        return;
    }
    node *curr=*head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=newnode(data);
    return;
}
int main()
{
    node *head = NULL;
    head=newnode (1);
    head->next=newnode(2);
    head->next->next=newnode(3);
    print(head);
    addfirst(&head, 4);
    cout<<endl;
    print(head);
    addlast(&head,5);
     cout<<endl;
    print(head);
}
