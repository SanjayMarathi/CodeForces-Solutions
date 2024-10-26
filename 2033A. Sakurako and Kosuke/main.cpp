#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = 0;
        bool isSakurako = true;
        for (int i = 1;; i++)
        {
            if (abs(x) > n)
            {
                break;
            }
            if (i % 2 == 1)
            {
                x -= -1 * (2 * i - 1);
                isSakurako = true;
            }
            else
            {
                x -= 2 * i - 1;
                isSakurako = false;
            }
        }
        if(isSakurako){
            cout<<"Sakurako"<<endl;
        }else{
            cout<<"Kosuke"<<endl;
        }
    }
    return 0;
}