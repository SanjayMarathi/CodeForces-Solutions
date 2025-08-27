#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int minDig = INT_MAX;
        while(n > 0) {
            minDig = min(minDig, n % 10);
            n /= 10;
        }
        cout<<minDig<<endl;
    }
    return 0;
}