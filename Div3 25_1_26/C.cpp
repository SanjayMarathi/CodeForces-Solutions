#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, q;
    cin>>n>>q;
    vector<ll> a(n), b(n), temp(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < n; i++) cin>>b[i];

    temp[n - 1] = max(a[n - 1], b[n - 1]);
    for(int i = n - 2; i >= 0; i--) {
        temp[i] = max(a[i], max(temp[i + 1], b[i]));
    }

    for(int i = 1; i < n; i++) {
        temp[i] += temp[i - 1];
    }

    for(int i = 0; i < q; i++) {
        ll l, r;
        cin>>l>>r;
        ll left = (l == 1) ? 0 : temp[l - 2];
        ll right = temp[r - 1];
        cout<<right - left<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
