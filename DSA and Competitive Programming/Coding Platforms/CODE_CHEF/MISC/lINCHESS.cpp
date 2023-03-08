#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int res=-1;
        int n,k;
        cin>>n;
        cin>>k;
        vector <int> can_divide;
        for(int i=0;i<n;i++){
            int element;
            cin>>element;
            if(k%element==0){
                can_divide.push_back(element);
            }
        }
        if(can_divide.size()>0){
            sort(can_divide.begin(),can_divide.end());
            res=can_divide[can_divide.size()-1];
        }
        cout<<res<<endl;

    }    
    return 0;
}