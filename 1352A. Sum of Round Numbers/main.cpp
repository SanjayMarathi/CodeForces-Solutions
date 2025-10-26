#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> div = {100000, 10000, 1000, 100, 10, 1};

        int cnt = 0;
        vector<int> ans;
        for(int i = 0; i < 6; i++) {
            if(n <= 0) break;
            if((n / div[i]) > 0) {
                cnt += 1;
                ans.push_back((n / div[i]) * div[i]);
                n = n % div[i];
            }
        }
        cout<<cnt<<endl;
        for(int i = 0; i < cnt; i++) {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}