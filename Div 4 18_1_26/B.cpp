#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    int maxEle = 0;
    for(int i = 0;i < n; i++) {
        cin>>a[i];
        maxEle = max(maxEle, a[i]);
    }
    cout<<maxEle * n<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}