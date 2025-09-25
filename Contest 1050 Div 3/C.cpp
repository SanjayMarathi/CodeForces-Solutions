#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        set<int> st;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == k) cnt += 1;
            st.insert(a[i]);
        }

        int ops = 0;
        for(int i = 0; i < k; i++) {
            if(!st.count(i)) {
                ops += 1;
            }
        }
        cout<< max(cnt, ops) <<endl;
    }
    return 0;
}
