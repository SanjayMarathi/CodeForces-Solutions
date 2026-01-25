#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin>>n;
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin>>p[i];

    int idx = 0;
    int ele = n;
    while(idx < n && p[idx] == ele) {
        idx += 1;
        ele -= 1;
    }
    int l = idx;
    int r = -1;
    if(idx != n) {
        int maxEle = p[idx];
        int maxIdx = idx;
        for(int i = idx; idx < n; idx += 1) {
            if(p[idx] > maxEle) {
                maxEle = p[idx];
                maxIdx = idx;
                r = maxIdx;
            }
        }
    }

    while(l < r) {
        swap(p[l], p[r]);
        l += 1;
        r -= 1;
    }
    
    for(int i = 0; i < n; i++) {
        cout<<p[i]<<" ";
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
