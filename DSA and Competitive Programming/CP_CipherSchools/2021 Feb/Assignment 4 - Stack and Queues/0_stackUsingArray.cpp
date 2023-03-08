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

using namespace std;
 
#define MAX 1000
 
class Stack {
    int size;
 
public:
    int a[MAX]; // Maximum size of Stack

    Stack()
    {
        size = -1;
    }
    bool push(int x);
    int pop();
    int top();
    bool isEmpty();
};
 
bool Stack::push(int x)
{
    if (size >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++size] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}
 
int Stack::pop()
{
    if (size < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[size--];
        return x;
    }
}
int Stack::top()
{
    if (size < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[size];
        return x;
    }
}
 
bool Stack::isEmpty()
{
    return (size < 0);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    Stack s;
    s.push(1);
    cout<<s.top();
    

    
    return 0;
}