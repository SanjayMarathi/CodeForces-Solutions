#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x, n;
        cin>>x>>n;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans += (i & 1) ? -x : x;
        }
        cout<<ans<<endl;
    }
    return 0;
}