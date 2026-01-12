#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;

    if(k > n) {
        cout<<-1<< endl;
        return;
    }

    set<ll> st;
    queue<pair<ll,int>> q;

    q.push({n, 0});
    st.insert(n);

    while(!q.empty()) {
        pair<ll,int> cur = q.front(); q.pop();
        ll x = cur.first;
        int cnt = cur.second;

        if(x == k) {
            cout<<cnt<<endl;
            return;
        }

        if(x < k) continue;

        if(x % 2 == 0) {
            ll split = x / 2;
            if(st.count(split) == 0) {
                st.insert(split);
                q.push({split, cnt + 1});
            }
        } else {
            ll split1 = (x - 1) / 2;
            ll split2 = (x + 1) / 2;

            if(st.count(split1) == 0) {
                st.insert(split1);
                q.push({split1, cnt + 1});
            }

            if(st.count(split2) == 0) {
                st.insert(split2);
                q.push({split2, cnt + 1});
            }
        }
    }

    cout<<-1<< endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
