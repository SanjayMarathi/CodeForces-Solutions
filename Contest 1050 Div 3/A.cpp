#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int cntNeg = 0, cntZero = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == -1) {
                cntNeg += 1;
            } else if(a[i] == 0) {
                cntZero += 1;
            }
        }
        int tot = (cntNeg % 2 == 1) ? 2 : 0;
        int ops = cntZero + tot;
        cout<< ops <<endl;
    }
    return 0;
}