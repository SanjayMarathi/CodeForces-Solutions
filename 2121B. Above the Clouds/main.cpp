#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool found = false;
        for (int i = 1; i < n - 1; i++) {
            char b = s[i];

            for (int j = 0; j < i; j++) {
                if (s[j] == b) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                for (int j = i + 1; j < n; j++) {
                    if (s[j] == b) {
                        found = true;
                        break;
                    }
                }
            }

            if (found) break;
        }

        cout << (found ? "Yes" : "No") << '\n';
    }
    return 0;
}
