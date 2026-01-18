#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    ll n, m, h;
    cin>>n>>m>>h;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
 
    vector<ll> b(m), c(m);
    for(int i = 0; i < m; i++) {
        cin>>b[i]>>c[i];
        b[i] -= 1;
    }
 
    vector<ll> added(n, 0), prev(n, 0); 
    int cnt = 1;
    for(int i = 0; i < m; i++) {
        if(prev[b[i]] != cnt) {
            added[b[i]] = 0;
            prev[b[i]] = cnt;
        }
        if(a[b[i]] + added[b[i]] + c[i] > h) {
            cnt += 1;
        } else {
            added[b[i]] += c[i];
        }
    }
 
    for(int i = 0; i < n; i++) {
        if(prev[i] != cnt) added[i] = 0;
        cout<<a[i] + added[i]<<" ";
    }
    cout<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}