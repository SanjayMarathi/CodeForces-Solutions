#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int x = 0;
    vector<string> a(n);
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i] == "++X" || a[i] == "X++") x += 1;
        else x -= 1;
    }
    cout<<x<<endl;
}

int main() {
    // int t;
    // cin>>t;
    // while(t--) {
        solve();
    // }
    return 0;
}