#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin>>n;

    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < n; i++) cin>>b[i];

    sort(a.begin(), a.end());

    vector<ll> pre(n);
    pre[0] = b[0];
    for(int i = 1; i < n; i++) pre[i] = pre[i - 1] + b[i];

    ll res = 0;
    for(int i = 0; i < n; i++) {
        ll strength = a[i];
        int check = lower_bound(a.begin(), a.end(), strength) - a.begin();
        ll possible = n - check;

        int levels = upper_bound(pre.begin(), pre.end(), possible) - pre.begin();
        res = max(res, strength * 1LL * levels);
    }

    cout<<res<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
