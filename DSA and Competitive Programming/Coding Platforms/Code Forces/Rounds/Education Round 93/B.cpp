#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int res=0;
        vector <int> v;
        for (int i = 0; i < n.size(); i++)  
        {
            if(n[i]=='1'){
                int j=i;
                while(n[j]=='1' && j<n.size()){
                    j++;
                }
                v.push_back((int)(j-i));
                i=j;
            }
        }
        sort(v.rbegin(), v.rend());
	    int ans = 0;
	    for (int i = 0; i < v.size(); i += 2)
		ans += v[i];
	    cout << ans << endl;
    }

}