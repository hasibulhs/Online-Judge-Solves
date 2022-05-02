#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t, i, sum;

    cin >> t;
    while(t--)
    {
        cin >> n;

        if(n < 2) cout << "0" << endl;
        else
        {
            sum = 1;
            for(i = 2; i * i <= n; i++)
            {
                if(i * i == n) sum += i;
                else if(n % i == 0) sum += i, sum += n / i;
            }

            cout << sum << endl;
        }
    }

    return 0;
}
