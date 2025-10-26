#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long x;
    cin>>x;
    string res = "";
    int last = 0;
    while(x > 0) {
        int digit = x % 10;
        if(9 - digit < digit) {
            last = digit;
            res += to_string(9 - digit);
        } else {
            res += to_string(digit);
        }
        x /= 10;
    }
    if(res.back() == '0') {
        res[res.size() - 1] = '9';
    }
    reverse(res.begin(), res.end());
    cout<<res<<endl;
}

int main() {
    solve();
    return 0;
}