#include <bits\stdc++.h>
using namespace std;

// Checking for One Points
int OnePoints(vector<vector<char>> Ring)
{
    int total = 0;
    // Upper and Lower row
    for (int i = 0; i < 10; i++)
    {
        if (Ring[0][i] == 'X')
        {
            total += 1;
        }
        if (Ring[9][i] == 'X')
        {
            total += 1;
        }
    }
    // Left and Right column
    for (int i = 1; i < 9; i++)
    {
        if (Ring[i][0] == 'X')
        {
            total += 1;
        }
        if (Ring[i][9] == 'X')
        {
            total += 1;
        }
    }
    return total;
}

// Checking for 2 points
int TwoPoints(vector<vector<char>> Ring)
{
    int total = 0;
    // Upper and Lower row
    for (int i = 1; i < 9; i++)
    {
        if (Ring[1][i] == 'X')
        {
            total += 2;
        }
        if (Ring[8][i] == 'X')
        {
            total += 2;
        }
    }
    // Left and Right column
    for (int i = 2; i < 8; i++)
    {
        if (Ring[i][1] == 'X')
        {
            total += 2;
        }
        if (Ring[i][8] == 'X')
        {
            total += 2;
        }
    }
    return total;
}

//Checking for 3 Points
int ThreePoints(vector<vector<char>> Ring)
{
    int total = 0;
    // Upper and Lower row
    for (int i = 2; i < 8; i++)
    {
        if (Ring[2][i] == 'X')
        {
            total += 3;
        }
        if (Ring[7][i] == 'X')
        {
            total += 3;
        }
    }
    // Left and Right column
    for (int i = 3; i < 7; i++)
    {
        if (Ring[i][2] == 'X')
        {
            total += 3;
        }
        if (Ring[i][7] == 'X')
        {
            total += 3;
        }
    }
    return total;
}
//Checking for Four Points
int FourPoints(vector<vector<char>> Ring)
{
    int total = 0;
    // Upper and Lower row
    for (int i = 3; i < 7; i++)
    {
        if (Ring[3][i] == 'X')
        {
            total += 4;
        }
        if (Ring[6][i] == 'X')
        {
            total += 4;
        }
    }
    // Left and Right column
    for (int i = 4; i < 6; i++)
    {
        if (Ring[i][3] == 'X')
        {
            total += 4;
        }
        if (Ring[i][6] == 'X')
        {
            total += 4;
        }
    }
    return total;
}
//Checking for Five Points
int FivePoints(vector<vector<char>> Ring)
{
    int total = 0;
    // Upper and Lower row
    for (int i = 4; i < 6; i++)
    {
        if (Ring[4][i] == 'X')
        {
            total += 5;
        }
        if (Ring[5][i] == 'X')
        {
            total += 5;
        }
    }
    return total;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int total_count = 0;
        vector<vector<char>> Ring(10, vector<char>(10));

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> Ring[i][j];
            }
        }

        total_count = OnePoints(Ring) + TwoPoints(Ring) + ThreePoints(Ring) + FourPoints(Ring) + FivePoints(Ring);
        cout << total_count << endl;
    }
    return 0;
}