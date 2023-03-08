#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    
    vector<int> even,odd;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        
        if(x%2)
            odd.push_back(x);
        else 
            even.push_back(x);
    }
    
    if (odd.size()<=1 || (odd.size() == n && n%2))
    {
        cout<<-1<<endl;
        return;
    }
    
    if(odd.size()%2)
    {
        cout<<odd[0]<<" ";
        odd.erase(odd.begin());
    }
    
    for(auto itr: even)
        cout<<(itr)<<" ";
    
    for(auto itr: odd)
        cout<<(itr)<<" ";
        
    cout<<endl;
        
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
        solve();

return 0;
}