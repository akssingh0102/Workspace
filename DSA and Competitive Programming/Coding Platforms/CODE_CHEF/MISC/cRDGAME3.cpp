#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int minDigitRequired(int n){
    int num;
    if(n<=9){
        
        return 1;
    }
    else{
        int don;
       
        num=n/9;
        don=n%9;
       
        if(don>0){
            num++;
        }
        return num;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int c,r;
        cin>>c>>r;
        int chefs,ricks;
        chefs=minDigitRequired(c);
        ricks=minDigitRequired(r);
        if(chefs<ricks){
            cout<<0<<" "<<chefs<<endl;
        }
        else
        {
            cout<<1<<" "<<ricks<<endl;
        }
        

    }    
    return 0;
}

// int main(){
//     cout<<minDigitRequired(18);
    
// }