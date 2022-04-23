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

int maxSubArraySum(int *a, int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    // if(max_so_far==INT_MIN) return -1;
    return max_so_far; 
} 

int maxSumIS(int arr[], int n) 
{ 
    // int i, j, max = 0; 
    // int msis[n]; 
  
    // for ( i = 0; i < n; i++ ) 
    //     msis[i] = arr[i]; 
  
    // for ( i = 1; i < n; i++ ) 
    //     for ( j = 0; j < i; j++ ) 
    //         if (arr[i] > arr[j] &&  
    //             msis[i] < msis[j] + arr[i]) 
    //             msis[i] = msis[j] + arr[i]; 
  
    // for ( i = 0; i < n; i++ ) 
    //     if ( max < msis[i] ) 
    //         max = msis[i]; 
  
    // return max; 
    int res=0,nev_count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=0){
            res+=arr[i];
        }
        else{
            nev_count++;
        }
    }

    if(nev_count==n){
        res=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            res=max(res,arr[i]);
        }
        
    }
    // if(res==0) return -1;
    return res;
    
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    com{
        iz(n)
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        long long int sub_arr,sub_seq;
        sub_arr=maxSubArraySum(a,n);
        sub_seq=maxSumIS(a,n);
        
        cout<<sub_arr<<" "<<sub_seq<<endl;
        
    }
    
    return 0;
}