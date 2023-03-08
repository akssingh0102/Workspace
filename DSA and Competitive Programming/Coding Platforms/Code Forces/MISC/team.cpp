#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    int res=0;
    cin>>t;
    while (t--)
    {
        int one_count=0;
        for (int i = 0; i < 3; i++)
        {
            int data;
            cin>>data;
            if(data==1){
                one_count++;
            }
        }
        if(one_count>1){
            res++;
        }
           
    }
    cout<<res;

    return 0;
}