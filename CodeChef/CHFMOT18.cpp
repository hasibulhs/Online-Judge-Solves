#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s, n, t, temp;

    cin >> t;
    while(t--)
    {
        cin >> s >> n;

        temp = s % n;
        if(temp == 0) cout << s / n << endl;
        else
        {
            if(temp % 2 == 0) cout << (s / n) + 1 << endl;
            else
            {
                if(temp == 1) cout << (s / n) + 1 << endl;
                else cout << (s / n) + 2 << endl;
            }
        }
    }

    return 0;
}
