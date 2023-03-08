#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int counter=0;
        string sur=s+s;   
        for (int i = 0; i < s.length(); i++)
        {
            if(s==sur.substr(i,(i+(s.length()-1)))){
                counter=i;
            }
        }
        int last=s.length()-counter;
        
        string ans=s;
        for (int i = 1; i < k; i++)
        {
            ans+=s.substr(last,s.length()-1);
        }
        
         
        cout<<ans<<endl;
       
    }    
    return 0;
}