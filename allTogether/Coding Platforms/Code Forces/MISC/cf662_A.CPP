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
            int res;
            cin>>n;
            if(n==1){
                res=1;
            }
            else if(n==2)
            {
                res=2;
            }
            else
            {
                if(n%2==0){
                    res=n/2;
                    res++;
                }
                else{
                    res=ceil(n/2.0);
                }
            }
            cout<<res<<endl;
            
            
            

        }
    return 0;
}