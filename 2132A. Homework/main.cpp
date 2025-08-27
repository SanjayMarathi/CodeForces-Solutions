#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        string a;
        cin>>a;
        int m;
        cin>>m;
        string b;
        cin>>b;

        string c;
        cin>>c;

        string res1 = "";
        string res2 = "";

        for(int i = 0; i < m; i++) {
            if(c[i] == 'V') {
                res1 += b[i];
            } else {
                res2 += b[i];
            }
        }

        reverse(res1.begin(), res1.end());

        string ans = res1 + a + res2;
        cout<<ans<<'\n';
    }
    return 0;
}