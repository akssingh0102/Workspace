#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
bool Sumgiven(int a[],int n,int sum){
    unordered_set <int> s;
    int pre_sum=0;
    for (int i = 0; i < n; i++)
    {
        pre_sum+=a[i];
        
        if (s.find(pre_sum-sum)!=s.end())
        {
            return true;
        }
        s.insert(pre_sum);
        
    }
    return false;
    
}
int main(){
    int arr[]={2 ,5 ,6,4,32,3,4,56,7,9} ;
    cout<<Sumgiven(arr,10,7)<<endl;
    return 0;
}