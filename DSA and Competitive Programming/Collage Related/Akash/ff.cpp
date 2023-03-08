#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int ts;
       cin>>ts;
       int count=0;
       if(ts==1 || ts==2 || ts==4)
       {
           count=0;
       }
       else if(ts%2==1)
       {
           count=ts/2;
       }
       else if(ts%2==0)
       {
           int div=0;
           count=(ts/2)-1;
           while(ts%2==0)
           {
               ts=ts/2;
               div++;
           }
           while(div--)
           {
               count=count/2;
           }
       }
       cout<<count<<endl;

    }
}