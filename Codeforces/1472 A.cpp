#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, w, h, n, c;

    cin >> t;
    while(t--)
    {
        cin >> w >> h >> n;
        c = 1;

        while(1)
        {
            if(w % 2 == 0)
            {
                w = w / 2;
                c *= 2;
            }

            else if(h % 2 == 0)
            {
                h = h / 2;
                c *= 2;
            }

            else
            {
                break;
            }
        }

        if(c >= n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
