#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, i1, i2, j1, j2, flag;
    char arr[405][405];

    cin >> t;
    while(t--)
    {
        cin >> n;
        flag = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> arr[i][j];

                if(arr[i][j] == '*' && flag == 0)
                {
                    i1 = i;
                    j1 = j;
                    flag++;
                }
                if(arr[i][j] == '*' && flag == 1)
                {
                    i2 = i;
                    j2 = j;
                }
            }
        }

        if(i1 == i2)
        {
            if(i1 == n - 1)
            {
                arr[i1 - 1][j1] = arr[i2 - 1][j2] = '*';
            }

            else
            {
                arr[i1 + 1][j1] = arr[i2 + 1][j2] = '*';
            }
        }

        else if(j1 == j2)
        {
            if(j1 == n - 1)
            {
                arr[i1][j1 - 1] = arr[i2][j2 - 1] = '*';
            }

            else
            {
                arr[i1][j1 + 1] = arr[i2][j2 + 1] = '*';
            }
        }

        else
        {
            arr[i1][j2] = '*';
            arr[i2][j1] = '*';
        }

        //cout << endl;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
