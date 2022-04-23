// Given a String S and an integer k we need to find
//  that whether the string can be changed into Pangram string 
//  by performing at most k changes and that changes can be only 
//  modification in a string (ie In one change we can remove existing
//   character and add new character).

// Input
// first line of input contains of an integer 'T' denoting 
// number od test cases
// first line of each testcase contains String 'S'.
// second line of each testcase contains an integer 'k' 
// denoting the number of changes that are allowed. 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    
	
	string s;
	cin>>s;
	int k;
	cin>>k;
	int a[26]={};
	
	for(int i=0;i<s.length();i++){
	    a[s[i]-'a']=1;
	}
	int count = 0;
	
	for(int i=0;i<26;i++){
	    if(a[i]==0)
	    count++;
	}
    // cout<<"Count = "<<count<<endl;
    // cout<<"K = "<<k<<endl;
    // cout<<s.length()<<endl;
	
	if(s.length()<26){
	    cout<<0<<endl;
	}
	if(count > k){
	    cout<<0<<endl;
	}
	else if(count == 0){
	    cout<<1<<endl;
	}
	else if(count <= k){
	    cout<<1<<endl;
	}
	
	}
	return 0;
}