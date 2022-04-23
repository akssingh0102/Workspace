#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int sequence(int a[],int n){
    unordered_set <int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    int res=0,curr=0;
    for (int i = 0; i < n; i++)
    {
        if(s.find(a[i]-1)!=s.end()){
            continue;
        }
        else if (s.find(a[i]-1)==s.end())   
        {
            int *j;
            j=s.find(a[i]);
            while (s.count(a[j]+1))
            {
                curr++;
                j=s.find(a[j]+1);

            }
            res=max(res,curr);
            curr=0;
        }
        
        
    }
    return res;
    
    
}
int main(){
    int a[]={1,3,5,14,34,56,2,34,4,90} ;   
    cout<<sequence(a,10)<<endl;
    return 0;
}