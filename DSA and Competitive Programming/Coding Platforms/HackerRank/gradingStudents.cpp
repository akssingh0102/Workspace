#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n>=38){
            int rem;
            rem=n%5;
            if(rem>=3){
                if(rem==3){
                    n+=2;
                }
                else if(rem==4)
                {
                    /* code */
                    n+=1;
                }
                
            }

        }
        cout<<n<<endl;
    }
    
        
    return 0;
}