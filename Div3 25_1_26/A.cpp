#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, s, x;
    cin>>n>>s>>x;
    vector<ll> a(n);
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        sum += a[i];
    }
    
    if(sum > s) {
        cout<<"No"<<endl;
    } else if(sum == s) {
        cout<<"Yes"<<endl;
        return;
    } else {
        int rem = s - sum;
        if(rem % x == 0) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
