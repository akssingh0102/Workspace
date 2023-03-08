#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
bool check (int a,int b,int c, int d){

int count=( (a%2) +(b%2) + (c%2) + (d%2) );
    // cout<<endl<<"Count :"<<count<<endl;
    // cout<<"AKASH";
    if( count > 1  ){
              return false;
}

    return true;


}

int main(){
    
       int n;
       cin>>n;
       
       for (int i = 0; i < n; i++)
       {
           int a[4]={};
          for (int j = 0; j < 4; j++)
          {
              cin>>a[j];
          }
          if(check(a[0],a[1],a[2],a[3])){
            //   cout<<"--";
              cout<<"Yes"<<endl;
          }
          else if(a[0]>0 && a[1]>0 && a[2]>0 &&  check(a[0]-1,a[1]-1,a[2]-1,a[3]+1)){
              cout<<"Yes"<<endl;
          }
          else
          {
              cout<<"No"<<endl;
          }
          
          
       }
       
}