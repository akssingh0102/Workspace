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

  int segregateArr (int arr[], int n) 
    { 
    	int j = 0, i; 
    	for(i = 0; i < n; i++) 
    	{ 
    	    if(arr[i] <= 0) 
    	    { 
    	        //changing the position of negative numbers and 0.
    	        swap(arr[i], arr[j]); 
    	        //incrementing count of non-positive integers.
    	        j++; 
    		} 
    	}
    	return j; 
    } 
    
    //Finding the smallest positive missing number in an array 
    //that contains only positive integers.
    int findMissingPositive(int arr[], int n)
    {
        
        //marking arr[i] as visited by making arr[arr[i]-1] negative. 
        //note that 1 is subtracted because indexing starts from 0 and 
        //positive numbers start from 1.
        for(int i=0; i<n; i++) 
        {
    	    if(abs(arr[i]) - 1 < n && arr[ abs(arr[i]) - 1] > 0) 
    	    arr[ abs(arr[i]) - 1] = -arr[ abs(arr[i]) - 1]; 
        } 
        
        for(int i=0; i<n; i++)
        {
            if (arr[i] > 0)
            {
                //returning the first index where value is positive. 
                // 1 is added because indexing starts from 0. 
    	        return i+1; 
            }
        }
        return n+1; 
    } 
    
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        //first separating positive and negative numbers. 
        int shift = segregateArr(arr, n); 
        
        //shifting the array to access only positive part.
        //calling function to find result and returning it.
        return findMissingPositive(arr+shift, n-shift); 
    } 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   
    int arr[] = {5,4,2,6,-1,-6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<missingNumber(arr,n);
    
    return 0;
}