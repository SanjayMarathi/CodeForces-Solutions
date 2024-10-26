#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;

    for (int i = 1; i <= n; i += 2)
    {
        k--;
        if (k == 0)
        {
            cout << i;
            break;
        }
    }
    if (k > 0)
    {
        for (int i = 2; i <= n; i += 2)
        {
            k--;
            if (k == 0)
            {
                cout << i;
                break;
            }
        }
    }
    return 0;
}