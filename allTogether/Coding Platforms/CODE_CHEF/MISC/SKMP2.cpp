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
    while(t--)
    {
    int n;
    string s,pattern;
    cin>>s;
    cin>>pattern;
    int fre[26]={};
    for(int i=0;i<s.length();i++){
        fre[s[i]-'a']++;

    }
   
   
    for (int i = 0; i < pattern.length(); i++)
    {
        
        fre[pattern[i]-'a']--;
     
    }
    //vector <char> neww;                              //changing
    string neww;
    for(int i=0;i<26;i++){
        while(fre[i]){
            neww.push_back('a'+i);
            fre[i]--;
        }
    }

    // sort(neww.begin(),neww.end());
    bool flag=false;
    for(int i=0;i<neww.length();i++){
        if(i<neww.length()-1 && flag==false){
            if((pattern+neww.substr(i,neww.length())) < (neww[i]+pattern+neww.substr(i+1,neww.length()))){
                flag=true;
                cout<<pattern<<neww[i];
            }
            else
            {
                cout<<neww[i];
            }
            
        }
        else if((i==(neww.length()-1)) && flag==false){
            if(neww[i]>pattern[0]){
                cout<<pattern<<neww[i];
            }
            else{
                cout<<neww[i]<<pattern;
            }
        }
        else
        {
            cout<<neww[i];
        }
        
    }
    cout<<endl;
    }
    return 0;
}