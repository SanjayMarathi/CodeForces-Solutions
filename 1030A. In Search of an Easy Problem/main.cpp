#include<bits/stdc++.h>
using namespace std;

 int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    bool hard = false;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i] == 1) {
            hard = true;
        }
    }
    cout<<(hard ? "HARD" : "EASY")<<endl;
    return 0;
 }