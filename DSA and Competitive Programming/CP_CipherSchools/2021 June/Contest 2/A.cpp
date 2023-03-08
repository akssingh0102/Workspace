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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    
    return 0;
}

bool  check(long m , long w , long p , long tt , long round)
{

    if(m >= (tt + w-1)/w)
    return true;

    long curr = m*w;
    round--;

    if(round == 0)
    return false;

    while(true)
    {

        long rem = tt - curr;

        long req = (rem + m*w -1) /( m*w);

        if(round >= req)
        return true;


        if(curr < p)
        {
            rem = p-curr;

            req = (rem  + m*w -1 )/(m*w);

            round = round - req;

            if(round < 1)
            return false;

            curr += req*m*w;
        }


        curr = curr-p;
        if( m > w)
        w++;
        else
        m++;

    }


}


static long minimumPasses(long m, long w, long p, long n) 
{

    long min = 1;
    long max = 10000000000000L; 

    while(min< max)
    {
        long mid = (min+max)/2;

        if(check(m , w , p , n ,mid))
        {
            max = mid;
        }
        else
        {
            min = mid+1;
        }
    }

    return min;
}