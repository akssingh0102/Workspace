#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
			
		}
		bool flag=true;
		if(n>1){
		for (int i = ; i < n; i++)
		{
			if( (a[i]^a[i-1]==a[i])  ||  (a[i]^a[i-1]==a[i-1]) ){
				flag=
			}
		}
		}
		
	}    
	return 0;
}