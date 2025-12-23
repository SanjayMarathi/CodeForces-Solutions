#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int maxEle = 0;
        bool pos = true;
        for(int i = n - 1; i >= 1; i--) {
            maxEle = max(maxEle, a[i]);
            if(maxEle == (n - i)) {
                pos = false;
                break;
            }
        }
        if(pos) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
