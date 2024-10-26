#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min_diff = INT_MAX;
        bool is_non_sorted = false;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                cout << 0 << endl;
                is_non_sorted = true;
                break;
            }
            int diff = a[i] - a[i - 1];
            min_diff = min(min_diff, diff);
        }
        if (is_non_sorted)
        {
            continue;
        }
        if (min_diff % 2 == 1)
        {
            cout << (min_diff + 1) / 2 << endl;
        }
        else
        {
            cout << (min_diff / 2) + 1 << endl;
        }
    }
    return 0;
}