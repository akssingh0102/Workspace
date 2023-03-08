#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
//count the same distinct element in the array 
int intersection(int a[],int b[],int m,int n){
    unordered_set <int> s;
    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]);
    }
    int res=0;
    for (int i = 0; i < n; i++)
    {
        if (s.find(b[i])!=s.end())  //find if the element is presnt it the set
        {
            res++;
            s.erase(b[i]);     //remove the element which is already been 
                                //intersected.
        }
        
    }
    return res;
    
    
}
int main(){
    int a[7]={10,15,20,15,30,30,5};
    int b[4]={30,5,30,80};
    cout<<intersection(a,b,7,4)<<endl;
    return 0;
}