#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;

    long long required = ((long long)(n + a - 1) / a) * ((long long)(m + a - 1) / a);

    cout << required << endl;
    return 0;
}