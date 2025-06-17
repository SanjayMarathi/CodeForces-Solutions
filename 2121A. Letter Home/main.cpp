#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int miN = arr[0];
        int maX = arr[n - 1];

        if (s < miN) {
            cout << maX - s << endl;
        } else if (s > maX) {
            cout << s - miN << endl;
        } else {
            cout << min(s - miN, maX - s) + (maX - miN) << endl;
        }
    }
    return 0;
}
