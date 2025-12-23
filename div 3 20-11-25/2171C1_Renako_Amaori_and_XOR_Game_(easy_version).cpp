#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int xa = 0, xb = 0;
        for(int i = 0; i < n; i++) {
            xa ^= a[i];
            xb ^= b[i];
        }
        
        if(xa == xb) {
            cout<<"Tie"<<endl;
            continue;
        }
        int lastIdx = -1;
        for(int i = 0; i < n; i++) {
            if(a[i] != b[i]) lastIdx = i;
        }

        if(lastIdx % 2 == 0) {
            cout<<"Ajisai"<<endl;
        } else {
            cout<<"Mai"<<endl;
        }
    }

    return 0;
}
