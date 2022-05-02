#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, c, t;

    cin >> t;
    while(t--)
    {
        cin >> n;
        c = 0;

        while(n > 1)
        {
            if(n % 6 == 0)
            {
                n /= 6;
                c++;
            }
            else
            {
                n *= 2;
                c++;
            }
        }

        if(n != 1) cout << "-1" << endl;
        else cout << c << endl;
    }

    return 0;
}
