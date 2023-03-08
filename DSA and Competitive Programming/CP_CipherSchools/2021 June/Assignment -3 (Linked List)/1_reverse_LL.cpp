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
#define mod                 1000000007

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        Node(0);
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class SinglyLinkedList
{
    int size;
public:
    Node *head;
    SinglyLinkedList()
    {
        this->head = NULL;
        size = 0;
    }

    void insertAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        this->size++;
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        this->size++;
    }

    void insertAtK(int k,int data){
        if(this->size < k){
            insertAtEnd(data);
        }
        else{
            Node *newNode = new Node(data);
            Node *temp = head;
            int curr = 1;
            while(curr < k-1){
                temp = temp->next;
                curr++;
            }

            Node *t = temp->next;
            temp->next = newNode;
            newNode->next = t;

        }
    }

    

    void printAll()
    {
        Node *curr = head;
        while(curr){
            cout<< curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }

    void delFirst(){
        if(head == NULL) return;
        Node *curr = head;
        curr = curr->next;
        delete(head);
        head = curr;  
    }

    void delLast(){
        if(head == NULL) return;
        Node *curr = head;
        
        if(curr->next == NULL){
            delete(curr);
            head = NULL;
        }

        while(curr->next->next != NULL){
            curr = curr->next;
        }
        Node *temp = curr->next;
        curr->next = curr->next->next;
        delete(temp);
    }

    void reverse(){
        if(head == NULL || head->next == NULL) return;
        Node* current = head;
        Node *prev = NULL, *nxt = NULL;
 
        while (current != NULL) {
            nxt = current->next;
 
            current->next = prev;
 
            prev = current;
            current = nxt;
        }
        head = prev;
        
    }

    void recReverseHelper(Node *curr, Node *prev){
        if(curr == NULL) return;
        if(curr->next == NULL) head = curr;

        recReverseHelper(curr->next,curr);
        curr->next = prev;
    }

    void recReverse(){
        recReverseHelper(head,NULL);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    SinglyLinkedList ob;
    ob.insertAtBeginning(10);
    ob.insertAtBeginning(20);
    ob.insertAtBeginning(30);
    ob.insertAtBeginning(40);
    ob.insertAtBeginning(50);
    ob.printAll();
    
    ob.reverse();
    ob.printAll();

    ob.recReverse();
    ob.printAll();

    return 0;
}