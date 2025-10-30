#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long GCD = a[0];
        for (int i = 1; i < n; i++) {
            GCD = gcd(GCD, a[i]);
        }

        long long x = -1;
        for (long long num = 2; num <= 100; num++) {
            if (gcd(GCD, num) == 1) {
                x = num;
                break;
            }
        }

        cout << x << "\n";
    }
    return 0;
}
