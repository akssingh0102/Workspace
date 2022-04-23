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
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        long long int p1=0;
        long long int p2=0;
        
        if(n<3){
            if(n==1){
                p1=a[0];
            }
            else if(n==2){
                p1=a[0];
                p2=a[1];
            }

        }
        else{
            p1=a[0];

            p2=a[1]+a[2];
            for(int i=3;i<n;i++){
                if((i%2)==1){
                    p1+=a[i];
                }
                else
                {
                    p2+=a[i];
                }
                
            }
        }
        if(p1>p2){
            cout<<"first"<<endl;
        }
        else if(p2>p1){
            cout<<"second"<<endl;
        }
        else if(p1==p2){
            cout<<"draw"<<endl;
        }
        
        
        
    }    
    return 0;
}