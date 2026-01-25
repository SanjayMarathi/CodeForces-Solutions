#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int intMax = 1e9;

void solve() {
    ll n;
    cin>>n;

    vector<ll> dp(n + 1, intMax);

    for(int i = 0; i < n; i++) {
        int num;
        cin>>num;
        dp[num] = 1;
    }

    for(int i = 2; i <= n; i++) {
        if(dp[i] == intMax) continue;
        for(int j = 2; j * i <= n; j++) {
            dp[i * j] = min(dp[i * j], dp[i] + dp[j]);
        }
    }

    for(int i = 1; i <= n; i++) {
        if(dp[i] == intMax) {
            cout<<-1<<" ";
        } else {
            cout<<dp[i]<<" ";
        }
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
