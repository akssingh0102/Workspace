#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define ll                  long long int 
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
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

using namespace std;
// void rotate_left(int a[],int d, int n){ 
//     reverse(a, a+d);
//     reverse(a+d, a+n);
//     reverse(a, a+n);
// }

// void rotate_right(int a[],int d,int n){
//     reverse(a+d, a+n);
//     reverse(a, a+d);
//     reverse(a, a+n);
    
// }
void rotateArr(int a[], int d, int n){
    
    reverse(a, a+d);
    reverse(a+d, a+n);
    reverse(a, a+n);
    
}

void reverseArray(int arr[], int start, int end) 
{ 
                            
    while (start < end) 
    { 
        swap(arr[start], arr[end]); 
        start++; 
        end--; 
    } 
} 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    iz(n)
    int a[n];
    int max_in=-1,maxx=INT_MIN;
    int min_in=-1,minn=INT_MAX;
    forn(n){
        cin>>a[i];
        if(a[i]>maxx){
            maxx=a[i];
            max_in=i;
        }
        if(a[i]<minn){
            minn=a[i];
            min_in=i;
        }
    }
    if(max_in<min_in){
        int mid=abs(max_in-min_in)%(n+1);
        rotateArr(a,mid,n);
    }
    else
    {
        int mid=(abs(max_in-min_in)%(n+1));
        // reverse(a+mid, a+n);
        // reverse(a, a+mid);
        // reverse(a, a+n);

        reverseArray(a, 0, n-1); 
        reverseArray(a, 0, mid-1); 
        reverseArray(a, mid, n-1); 
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" "; 
    }
    

    return 0;
}