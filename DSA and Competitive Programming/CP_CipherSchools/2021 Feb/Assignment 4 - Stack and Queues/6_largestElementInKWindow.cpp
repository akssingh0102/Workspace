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
void printKMax(int arr[], int n, int k)
{
     
    std::deque<int> Qi(k);
 
    int i;
    for (i = 0; i < k; ++i) 
    {
        while ((!Qi.empty()) && arr[i] >= 
                            arr[Qi.back()])
           
            Qi.pop_back();
 
        Qi.push_back(i);
    }
 
    for (; i < n; ++i) 
    {
     
        cout << arr[Qi.front()] << " ";
 
        while ((!Qi.empty()) && Qi.front() <= 
                                           i - k)
           
            Qi.pop_front(); 
 
        while ((!Qi.empty()) && arr[i] >= 
                             arr[Qi.back()])
            Qi.pop_back();
 
        Qi.push_back(i);
    }
 
    cout << arr[Qi.front()];
}
 
int main()
{
    int arr[] = { 12, 1, 78, 90, 57, 89, 56 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printKMax(arr, n, k);
    return 0;
}