#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n;
        
        cin>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int lower_bound=0,count=-1,nn=0;
        bool flag=true;
        while(1){
            if(a[nn]!=a[nn-1]+1){
                lower_bound=nn;
            }
            if(nn==n-1){
                flag=false;
                break;
            }
            if((a[nn]+1)==m && a[nn+1]!=m){
                break;
            }
            nn++;
        }
        if(flag==true){

        
        count=n-lower_bound;
        }
        else
        {
            count=-1;
        }
        
         cout<<count<<endl;
        }
}
