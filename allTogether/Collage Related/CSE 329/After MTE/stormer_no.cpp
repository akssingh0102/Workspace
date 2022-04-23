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
int primeFactors(int n)  
{  
    int largest=INT_MIN;
    
   
    while (n % 2 == 0)  
    {  
        n = n/2;  
        largest=max(largest,2);
    }  
  
    
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
          
        while (n % i == 0)  
        {  
            n = n/i;  
            largest=max(largest,i);
        }  
    }  
 
    if (n > 2)  
        largest=max(largest,n);

    return largest;
}
bool isStormer(int num){
    int n=(num*num)+1;
    return (n>primeFactors(num));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int num;
    cin>>num;
    if(isStormer(num)){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}