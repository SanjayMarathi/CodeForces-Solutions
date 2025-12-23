#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--) {
        int n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin>>a[i];
        int even = -1;
        int odd = -1;
        bool found = false;
        vector<int> res(2);
        for(int i = 0; i < n; i++) {
            if(a[i] % 2 == 0) {
                if(even != -1) {
                    found = true;
                    res = {even, a[i]};
                    break;
                } else {
                    even = a[i];
                }
            } else {
                if(odd != -1) {
                    found = true;
                    res = {odd, a[i]};
                    break;
                } else {
                    odd = a[i];
                }
            }        
        }
        if(found) cout<<res[0]<<" "<<res[1]<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}