#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink = (k * l) / nl;
    int total_lime = c * d;
    int total_salt = p / np;
    int ans = min(total_drink, min(total_lime, total_salt)) / n;
    cout<<ans<<endl;
}

int main() {
    // int t;
    // cin>>t;
    // while(t--) {
        solve();
    // }
    return 0;
}