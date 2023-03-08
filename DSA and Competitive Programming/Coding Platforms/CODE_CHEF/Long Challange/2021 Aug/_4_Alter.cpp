#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int res=0,last=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if((i-last) <= (k+1)){
                    last = min(last+k,i+1);
                }
                else{
                    res++;
                    last=i+1;
                }
            }
        }
        cout<<res<<endl;
    }
    
    return 0;
}