#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
bool sumZero(int arr[],int n){
    unordered_set <int> s;
    int pre_sum=0;

    for (int i = 0; i < n; i++)
    {
        pre_sum+=arr[i];
        if(s.find(pre_sum)!=s.end()){
            return true;

        }
        if(pre_sum==0){
            return true;

        }
        s.insert(pre_sum);
    }
    return false;
    
}
int main(){
    int arr[]={1,4,-3,2,1,4};
    cout<<sumZero(arr,6)<<endl;

    return 0;
}