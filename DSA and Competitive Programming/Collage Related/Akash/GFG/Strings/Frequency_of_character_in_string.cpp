#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
void countFre(string s){
    int a[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(a[i]>0){
            cout<<(char)(i+'a')<<" "<<a[i]<<endl;
        }
    }
    
    
}
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    countFre(s);    
    return 0;
}