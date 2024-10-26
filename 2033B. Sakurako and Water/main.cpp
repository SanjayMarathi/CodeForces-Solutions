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
        int matrix[n][n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] < 0){
                    int num = abs(matrix[i][j]);
                    count += num;
                    for (int k = 0; i + k < n && j + k < n; k++) {
                        matrix[i + k][j + k] += num;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}