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
void primeSieve(int *p){
    //markes all odd int as potential prime's
    for (int i = 3; i < 1000000; i+=2)
    {
        p[i]=1;
    }

    //Sieve
    for (ll i = 3; i < 1000000; i+=2)
    {
        //if current no. is not marked it's Prime
        if(p[i]==1){
            for (ll j=i*i; j < 1000000; j+=i)
            {
                p[j]=0;
            }
            
        }
    }
    //special case
    p[2]=1;
    p[0]=p[1]=0;
}
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int prime[1000000]={};
    primeSieve(prime);
    com{
        iz(n);
        int ele;
        for (int i = n-1; i < 100000; i++)
        {
            if(prime[i]==1){
                ele=i-(n-1);
                if(isPrime(ele)==false){
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i==j){
                    cout<<ele<<" ";
                }
                else{
                    cout<<1<<" ";
                }
            }
            cout<<endl;
        }
        
        
        
    }
    
    return 0;
}