#include<bits/stdc++.h>
using namespace std;
 
const int N = 1e5 + 9;
const long long M = 1e18;
 
long long a[N];
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    assert(1 <= t && t <= 300);
    int sum = 0;
    while (t--) {
        int n; cin >> n;
        assert(1 <= n && n <= 100000);
        sum += n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            assert(0 <= a[i] && a[i] <= M);
        }
        if (n > 60) {
            cout << "NO\n";
            continue;
        }
        set<long long> se;
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            long long cur = 0;
            for (int j = i; j <= n; j++) {
                cur |= a[j];
                if (se.find(cur) != se.end()) {
                    ok = false;
                    break;
                }
                se.insert(cur);
            }
            if (!ok) break;
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    assert(1 <= sum && sum <= 300000);
    return 0;
} #include<bits/stdc++.h>
using namespace std;
 
const int N = 1e5 + 9;
const long long M = 1e18;
 
long long a[N];
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    assert(1 <= t && t <= 300);
    int sum = 0;
    while (t--) {
        int n; cin >> n;
        assert(1 <= n && n <= 100000);
        sum += n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            assert(0 <= a[i] && a[i] <= M);
        }
        if (n > 60) {
            cout << "NO\n";
            continue;
        }
        set<long long> se;
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            long long cur = 0;
            for (int j = i; j <= n; j++) {
                cur |= a[j];
                if (se.find(cur) != se.end()) {
                    ok = false;
                    break;
                }
                se.insert(cur);
            }
            if (!ok) break;
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    assert(1 <= sum && sum <= 300000);
    return 0;
} 