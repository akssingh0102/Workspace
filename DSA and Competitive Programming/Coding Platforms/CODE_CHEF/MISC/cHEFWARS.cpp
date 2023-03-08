#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,p;
        cin>>h;
        cin>>p;
        int res;
        while (1)
        {
            if(h<1){
                res=1;
                break;
            }
            else if(p<=0){
                res=0;
                break;
            }
            h-=p;
            p=p/2;
            // cout<<"Helth ="<<h<<endl;
            // cout<<"Power ="<<p<<endl;
        }
        cout<<res<<endl;
        
    }    
    return 0;
}