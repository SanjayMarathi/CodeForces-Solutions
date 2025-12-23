#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        for(int i = n - 2; i >= 0; i--) {
            if(s[i] != s[i + 1]) {
                cnt += 1;
            }
            s[i] = s[i + 1];
        }
        cout<<cnt<<endl;
    }
    return 0;
}