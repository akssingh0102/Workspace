#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
};
void push(node **head, int data, node **mid,int &count)
{
    node *nn=new node;
    nn->data=data;
    nn->next=nn->prev=NULL;
    nn->next=*head;
    count++;
    if(count==1)
    {
        *head=*mid=nn;
        return;
    }
    else
    {
        (*head)->prev=nn;
    }
    if(count&1)
    {
        (*mid)=(*mid)->prev;
    }
    *head=nn;
}


void display(node *head)
{
    node *curr=head;
    cout<<endl;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
void middle(node *mid)
{
    if(mid!=NULL)
        cout<<endl<<mid->data;
}

void pop(node **head, node **mid, int &count)
{
    if(count==0)
    {
        cout<<"Stack underflows"<<endl;
        return;
    }
    if(count==1)
    {
        delete *head;
        *head=*mid=NULL;
        count--;
        return;
    }
    node *temp=(*head);
    (*head)=(*head)->next;
    (*head)->prev=NULL;
    delete temp;
    count--;
    if(!(count&1))
    {
        (*mid)=(*mid)->next;
    }
}

void deletemid(node **head, node **mid, int &count)
{
    if(count==0)
    {
        return;
    }
    if(count==1)
    {
        delete *head;
        *head=*mid=NULL;
        count--;
        return;
    }
    count--;
    node *temp=*mid;
    if(count==1)
    {
        (*mid)->prev->next=NULL;  //(*head)->next=NULL;
        (*mid)=*head;
        delete temp;
        return;
    }
    (*mid)->prev->next=(*mid)->next;
    (*mid)->next->prev=(*mid)->prev;

    if(count& 1)
    {
        (*mid)=(*mid)->prev;
    }
    else
        (*mid)=(*mid)->next;
    delete temp;

}
int main()
{
    int option, x;
    node *head=NULL, *mid=NULL;
    int count=0;

    while(1)
    {
        cout<<"\n1. Push\n2. Pop\n3. Middle\n4. DeleteMid\n5. Display\n6. Exit\n";
        cin>>option;
        switch(option)
        {
            case 1:
                cin>>x;
                push(&head,x,&mid,count);
                break;
            case 2:
                pop(&head, &mid, count);
                break;
            case 3:
                middle(mid);
                break;
            case 4:
                deletemid(&head, &mid, count);
                break;
            case 5:
                display(head);
                break;
        }
    }
}
