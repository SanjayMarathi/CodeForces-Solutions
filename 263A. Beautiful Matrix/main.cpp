#include <bits\stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix(5, vector<int>(5));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int distance = 0;
    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                found = true;
                distance = abs(2 - i) + abs(2 - j);
                break;
            }
        }
        if (found)
        {
            break;
        }
    }
    cout << distance;
    return 0;
}