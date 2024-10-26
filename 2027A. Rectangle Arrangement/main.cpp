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
        int max_width = 0;
        int max_height = 0;
        for (int i = 0; i < n; i++)
        {
            int w, h;
            cin >> w >> h;
            if (max_width < w)
            {
                max_width = w;
            }
            if (max_height < h)
            {
                max_height = h;
            }
        }
        int perimeter = (max_width + max_height) * 2;
        cout << perimeter << endl;
    }
    return 0;
}