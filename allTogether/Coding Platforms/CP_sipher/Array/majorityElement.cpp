//moore's Algorithm
//find element which is occuring ore than n/2 times in the array
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int findCandididate(vector<int> &ele){
    int candidate=ele[0];
    int count=1;
    for (int  i = 0; i < ele.size(); i++)
    {
        if(ele[i]==candidate){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            candidate=ele[i];
        }
    }
    return candidate;

}

int majorityElement(vector <int> &ele){
    int res=findCandididate(ele);
    int count=0;
    for (int i = 0; i < ele.size(); i++)
    {
        if(ele[i]==res){
            count++;
        }
    }
    if(count > ((ele.size())/2)){
        return res;
    }
    else{
        return -1;
    }
    
}

int main(){

    return 0;
}
