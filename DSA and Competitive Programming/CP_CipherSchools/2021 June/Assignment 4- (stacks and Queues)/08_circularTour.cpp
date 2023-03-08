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

class petrolPump  
{ 
    public: 
    int petrol;  
    int distance;  
};  


int printTour(petrolPump arr[], int n)  
{  
    int start = 0;  
    int end = 1;  
  
    int curr_petrol = arr[start].petrol - arr[start].distance;  
  
    while (end != start || curr_petrol < 0)  
    {  
        while (curr_petrol < 0 && start != end)  
        {  
            curr_petrol -= arr[start].petrol - arr[start].distance;  
            start = (start + 1) % n;  
  
            if (start == 0)  
            return -1;  
        }  
  
        curr_petrol += arr[end].petrol - arr[end].distance;  
  
        end = (end + 1) % n;  
    }  
  
    return start;  
}  
  
int main()  
{  
    petrolPump arr[] = {{6, 4}, {3, 6}, {7, 3}};  
  
    int n = sizeof(arr)/sizeof(arr[0]);  
    int start = printTour(arr, n);  
  
    (start == -1)? cout<<"No solution": cout<<"Start = "<<start;  
  
    return 0;  
}  