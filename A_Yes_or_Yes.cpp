#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        int cntY = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'Y') {
                cntY += 1;
            }
        }

        if(cntY <= 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
