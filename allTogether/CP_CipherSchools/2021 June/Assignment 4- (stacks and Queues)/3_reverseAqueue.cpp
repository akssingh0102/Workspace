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
// void addAtFront(queue<int> &q,int data){
//     if(q.size()==0){
//         q.push(data);
//     }
//     else{
//         int data_1=q.front();
//         addAtFront(q,data);

//         q.push(data_1);
//     }
// }
void queueReverse(queue<int> &q){
    if(q.size()==0){
        return;
    }

    int data=q.front();
    q.pop();
    queueReverse(q);

    q.push(data);
}

void queuePrint(queue<int> q){
    while(q.size()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    queuePrint(q);
    cout<<endl;
    queueReverse(q);

    queuePrint(q);


    
    
    
    return 0;
}