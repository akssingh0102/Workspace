#include<bits/stdc++.h>
using namespace std;
const int MAX=5;
int arr[MAX];
int front=-1, rear=-1;
void add(int x)
{
    if(rear==MAX-1)
    {
        cout<<"Queue overflow"<<endl;
        return;
    }
    arr[++rear]=x;
    if(front==-1)
        front++;
}
void deleteele()
{
    if(front==-1 || front>rear)
    {
        cout<<"Queue underflow"<<endl;
        return;
    }
    front++;
}

void display()
{
    cout<<endl;
    if(front==-1)
        return;
    for(int i=front;i<=rear;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int option,x;


    while(1)
    {
        cout<<"1. Add\n2. Delete\n3. Display\n4. Exit\n";
        cin>>option;
        switch(option)
        {
            case 1:
                cin>>x;
                add(x);
                break;
            case 2:
                deleteele();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(-1);
        }
    }
}

