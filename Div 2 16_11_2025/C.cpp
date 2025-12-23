#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        long long maxSum = 0;
        int maxEle = 0;
        for(int i = 0; i < n; i++) {
            maxSum += max(arr[i], arr[(i + 1) % n]);
            maxEle = max(maxEle, arr[i]);
        }
        cout<<maxSum - maxEle<<endl;
    }
    return 0;
}