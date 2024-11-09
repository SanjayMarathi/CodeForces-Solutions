#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, m;
        cin >> n >> s >> m;

        vector<vector<int>> arr;

        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            arr.push_back({l, r});
        }

        sort(arr.begin(), arr.end());
        bool canShower = false;
        int prev = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] - prev >= s)
            {
                canShower = true;
                break;
            }
            prev = arr[i][1];
        }

         if (m - prev >= s)
        {
            canShower = true;
        }

        if (canShower)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
