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



int sol(priority_queue<int, vector<int>, greater<int> >q, int k)
{

	int res = 0;
	while (!q.empty())
	{
		if (q.top() >= k)
			return res;
		else
		{
			int first = q.top();
			int second;
			q.pop();
			if (q.empty())
			{
				return -1;
			}
			else
			{
				second = q.top();
				q.pop();
			}

			int curr = first+(second * 2);
			q.push(curr);
            
			res++;
		}


	}
return -1;

}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size, k;
	cin >> size>>k;

	priority_queue<int, vector<int>, greater<int> >q;
	while (size--)
	{
		int num;
		cin >> num;
		q.push(num);
	}
	cout << sol(q, k) << endl;
    return 0;
}