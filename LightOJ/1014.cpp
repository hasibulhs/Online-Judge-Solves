#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    long long int p, l, temp;

    cin >> tt;
    for(int t = 1; t <= tt; t++)
    {
        vector <long long int> divs;

        cout << "Case " << t << ":";
        cin >> p >> l;
        temp = p - l;

        for(long long int i = 1; i * i <= temp; i++)
        {
            if(temp % i == 0)
            {
                if(i > l) divs.push_back(i);
                if(temp / i > l)
                {
                    if(i != temp / i) divs.push_back(temp / i);
                }
            }
        }

        sort(divs.begin(), divs.end());
        if(divs.size() == 0)
        {
            cout << " impossible" << endl;
        }

        else
        {
            for(auto i: divs) cout << " " << i;
            cout << endl;
        }
    }

    return 0;
}
