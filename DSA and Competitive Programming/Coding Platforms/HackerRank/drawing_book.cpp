#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    int p;
    cin>>n;
    cin>>p;
    int count=0;
    if(p==1 || ((n%2==0) && p==n )){
        count=0;
    }
    else if(p<=(n-p)){
        for (int i = 1; i < n; i+=2)
        {
            if(p<=i){
                break;
            }
            count++;
            
        }
        
    }    
    else
    {
        if(n%2==0){
            for (int i = n; i >= 1; i-=2)
            {
                if(p>=i){
                    break;
                }
                count++;
            }
            
        }
        else
        {
            for (int i = n-1; i >= 1; i-=2)
            {
                if(p>=i){
                    break;
                }
                count++;
            }
            
        }
       
       
    }
     cout<<count<<endl;
    
    return 0;
}