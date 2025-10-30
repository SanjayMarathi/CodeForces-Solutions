#include<bits/stdc++.h>
using namespace std;


void solve() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    map<int,int> mp;
    mp[a] += 1;
    mp[b] += 1;
    mp[c] += 1;
    mp[d] += 1;
    if(mp[a] == 4) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}