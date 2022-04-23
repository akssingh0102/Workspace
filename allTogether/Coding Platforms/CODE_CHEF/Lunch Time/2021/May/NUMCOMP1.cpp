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

void primeInRange(int L, int R,int &count)
{
    int flag;
 
    // Traverse each number in the
    // interval with the help of for loop
    for (int i = L; i <= R; i++) {
 
        // Skip 0 and 1 as they are
        // neither prime nor composite
        if (i == 1 || i == 0)
            continue;
 
        // flag variable to tell
        // if i is prime or not
        flag = 1;
 
        // Iterate to check if i is prime
        // or not
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
 
        // flag = 1 means i is prime
        // and flag = 0 means i is not prime
        if (flag == 1)
            // cout << i << " ";
            count++;
    }
}

const int MAX = 1000000;
 
// prefix[i] is going to store count of primes
// till i (including i).
int prefix[MAX + 1];
 
void buildPrefix()
{
    // Create a boolean array "prime[0..n]". A
    // value in prime[i] will finally be false
    // if i is Not a prime, else true.
    bool prime[MAX + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= MAX; p++) {
 
        // If prime[p] is not changed, then
        // it is a prime
        if (prime[p] == true) {
 
            // Update all multiples of p
            for (int i = p * 2; i <= MAX; i += p)
                prime[i] = false;
        }
    }
 
    // Build prefix array
    prefix[0] = prefix[1] = 0;
    for (int p = 2; p <= MAX; p++) {
        prefix[p] = prefix[p - 1];
        if (prime[p])
            prefix[p]++;
    }
}
 
// Returns count of primes in range from L to
// R (both inclusive).
int query(int L, int R)
{
    return prefix[R] - prefix[L - 1];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    buildPrefix();
    com{
        iz(n)
        if(n==2){
            cout<<1<<endl;
        }
        else if(n==3){
            cout<<2<<endl;
        }
        else if(n==4){
            cout<<2<<endl;
        }
        else if(n==5){
            cout<<3<<endl;
        }
        else if(n==6){
            cout<<2;
        }
        else{
            int count=0;
            int cc=0;
            bool flag=false;
            if(n%2==0){
                // primeInRange(ceil(n/2.0)+1,n,count);
                cc=query(ceil(n/2.0)+1,n);
            }
            else
            // primeInRange(ceil(n/2.0),n,count);
            cc=query(ceil(n/2.0),n);
            
            cout<<cc+1<<endl;
        }
    }

    
    return 0;
}