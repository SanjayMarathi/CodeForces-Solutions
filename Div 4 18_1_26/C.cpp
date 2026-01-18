#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    set<int> st;
    for(int i = 0;i < n; i++) {
        cin>>a[i];
        st.insert(a[i]);
    }
    vector<int> nums;
    for(auto& num : st) {
        nums.push_back(num);
    }
    int prev = INT_MIN;
    int maxCnt = 1;
    int cnt = 1;
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i - 1] + 1 == nums[i]) {
            cnt += 1;
            maxCnt = max(maxCnt, cnt);
        } else {
            cnt = 1;
        }
    }
    cout<<maxCnt<<endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}