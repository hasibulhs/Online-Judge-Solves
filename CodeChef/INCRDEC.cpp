#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a[200005], freq[200005], t, n, i;
    bool print;

    cin >> t;
    while(t--)
    {
        for(i = 0; i < 200005; i++) freq[i] = 0;
        print = false;

        cin >> n;
        for(i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);

        for(i = 0; i < n; i++)
        {
            freq[a[i]]++;

            if(freq[a[i]] > 2)
            {
                cout << "NO" << endl;
                print = true;
                break;
            }

            if(i == n - 1 && freq[a[i]] == 2)
            {
                cout << "NO" << endl;
                print = true;
                break;
            }
        }

        if(!print)
        {
            cout << "YES" << endl;

            for(i = 0; i < n; i++)
            {
                if(freq[a[i]] == 2)
                {
                    cout << a[i] << " ";
                    freq[a[i]]--;
                }
            }

            for(i = n - 1; i >= 0; i--)
            {
                if(freq[a[i]] == 1)
                {
                    cout << a[i] << " ";
                    freq[a[i]]--;
                }
            }

            cout << endl;
        }
    }

    return 0;
}
