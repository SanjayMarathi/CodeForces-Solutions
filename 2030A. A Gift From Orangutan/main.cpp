#include<bits\stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long score = 0;
        for (int i = 0; i < n - 1; ++i) {
            score += a[n - 1] - a[0];
        }
        cout << score << endl;
    }

    return 0;
}