#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, count;
    cin >> t;
    while(t--)
    {
        cin >> n;
        count = 0;

        for (long long i = 1; i <= n; i = i * 10 + 1)
        {
            for(int j = 1; j <= 9; j++)
            {
                if(i * j <= n) count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
