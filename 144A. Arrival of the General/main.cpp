#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin>> a[i];
    }

    int maxEle = a[0];
    int maxPos = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] > maxEle) {
            maxEle = a[i];
            maxPos = i;
        }
    }

    int minEle = a[0];
    int minPos = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] <= minEle) {
            minEle = a[i];
            minPos = i;
        }
    }

    int moves = maxPos;
    moves += (n - 1 - minPos);
    if(minPos < maxPos) moves -= 1;
    cout<<moves<<endl;
    return 0;
}