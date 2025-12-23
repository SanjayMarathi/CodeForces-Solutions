#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int tot = 0;
        for(int i = 0; i <= n; i += 2) {
            if((n - i) % 4 == 0) {
                tot += 1;
            }
        }
        cout<<tot<<endl;
    }
    return 0;
}