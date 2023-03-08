#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

int stringToBinary(string s){
    int ans=0;
    for (int i = 0; i < s.size(); i++)
    {
        ans+=((int)s[i])*(pow(2,i));
    }
    return ans;
}

string binaryToString(int n){
    string s;
    while(n){
        if(n%2==1){
            s.push_back('1');
        }
        else
        s.push_back('0');
        
        n=n/2;
    }
    return s;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int minn=INT32_MAX;
        int maxx=INT32_MIN;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]>maxx){
                maxx=a[i];
            }
            if(a[i]<minn){
                minn=a[i];
            }
        }
        string binX=binaryToString(minn);
        string binY=binaryToString(maxx);

        string binXplusY=binX+binY;
        string binYplusX=binY+binX;

        int XplusY =stringToBinary(binXplusY);
        int YplusX =stringToBinary(binYplusX);
        /*/
        cout<<"minn :"<<minn<<endl; 
        cout<<"maxx :"<<maxx<<endl<<"binX :"<<binX<<endl<<"binY :"<<binY<<endl;
        cout<<"binXplusY :"<<binXplusY<<endl<<"binYplusX :"<<binYplusX<<endl;
        cout<<"XplusY :"<<XplusY<<endl<<"YplusX :"<<YplusX<<endl;
        /*/
        
        

        cout<<abs(XplusY-YplusX)<<endl;
    }    
    return 0;
}