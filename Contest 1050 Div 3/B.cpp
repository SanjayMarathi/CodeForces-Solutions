#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(), a.end());

        int minDiff = 0;
        for(int i = 0; i < n; i += 2) {
            minDiff = max(minDiff, a[i + 1] - a[i]);
        }

        cout<< minDiff <<endl;
    }
    return 0;
}