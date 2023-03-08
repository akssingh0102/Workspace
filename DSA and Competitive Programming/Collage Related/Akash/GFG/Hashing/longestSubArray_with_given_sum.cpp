#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int longsubarr(int a[],int n,int sum){
    unordered_map <int,int> mp;
    int pre_sum=0,res=0;
    for (int i = 0; i < n; i++)
    {
        pre_sum+=a[i];
        if(pre_sum==sum){return i+1;}
        if(mp.find(pre_sum-sum)==mp.end()){
            mp.insert({pre_sum,i});
        }
        if(mp.find(pre_sum-sum)!=mp.end()){
           res=max(res,i-(mp[pre_sum-sum])); 
        }
        
    }
    return res;
    

}
int main(){
    int arr[]={1,2,3,5,3,-8,32,4,32,-8,-4,2,2,6} ;

    int sum=6,n=14;
    cout<<longsubarr(arr,n,sum);
    return 0;
}