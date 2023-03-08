#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main ()
{
  int t;
  cin>>t;
  while(t--){
      int n,m;
      cin>>n;
      cin>>m;
      int a[n];
      int b[m];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      for(int i=0;i<m;i++){
          cin>>b[i];
      }
      
      int res;
      bool flag=false;
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(a[i]==b[j]){
                  flag=true;
                  res=a[i];
                  break;
              }
          }
          if(flag){
              break;
          }
      }
      if(flag==false){
          cout<<"NO"<<endl;
      }
      else{
          cout<<"YES"<<endl;
          cout<<1<<" "<<res<<endl;
      }
  }
  return 0;
}
