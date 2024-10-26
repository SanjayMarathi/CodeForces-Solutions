#include <bits\stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        if (last_digit == 4 || last_digit == 7)
        {
            count++;
        }
        n /= 10;
    }
    bool islucky = true;
    if(count == 0) islucky = false;
    while (count > 0)
    {
        int last_digit = count % 10;
        if (last_digit != 4 && last_digit != 7)
        {
            islucky = false;
            break;
        }
        count /= 10;
    }
    if (islucky)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}