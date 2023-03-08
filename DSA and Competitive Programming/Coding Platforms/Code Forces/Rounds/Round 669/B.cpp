#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 

void solve() {
    

    int n;
    cin >> n;
    int a[n];
    int mi = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mi = (a[i] > a[mi] ? i : mi);
    }
    vector<int> b(n);
    b[0] = a[mi]; a[mi] = 0;
    int cg = b[0];
    for (int i = 1; i < n; i++) {
        int ci = 0, cans = 0;
        for (int j = 0; j < n; j++)
            if (a[j] && gcd(a[j], cg) > cans) {
                cans = gcd(a[j], cg);
                ci = j;
            }
        b[i] = a[ci];
        cg = cans;
        a[ci] = 0;
    }
    for (int i = 0; i < n; i++)
        cout << b[i] << ' ';
    cout << '\n';
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
