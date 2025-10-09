#include<bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    set<int> s;
    for(int i=0;i<n;i++) s.insert(a[i]);

    return 2 * s.size() - 1;
}

int main() {
    int t;
    cin >> t;
    while (t--)  {
        cout<<solve()<<endl;
    }
}