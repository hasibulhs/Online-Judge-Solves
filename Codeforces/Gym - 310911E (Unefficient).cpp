#include<bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    int result = 1;

    for(int i = 0; i < b; ++i)
    {
        result *= a;
    }

    return result;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt, temp, c;
    cin >> tt;

    for(int i = 0; i < tt; i++)
    {
        int lpf = INT_MAX;
        int gpf = INT_MIN;

        vector <int> base;
        vector <int> exp;

        cin >> temp;

        for (int j = 2; j * j <= temp; j++)
        {
            if (temp % j == 0)
            {
                base.push_back(j);
                c = 0;

                while (temp % j == 0)
                {
                    c++;

                    lpf = min(lpf, j);
                    gpf = max(gpf, j);
                    temp /= j;
                }

                exp.push_back(c);
            }
        }

        if (temp > 1)
        {
            base.push_back(temp);
            exp.push_back(1);

            lpf = min(lpf, temp);
            gpf = max(gpf, temp);
        }

        cout << lpf << " " << gpf << " ";

        int nov = 1;
        int sov = 1;
        int tnopf = 0;

        for(int i = 0; i < base.size(); i++)
        {
            nov *= exp[i] + 1;

            temp = power(base[i], exp[i] + 1);
            sov *= (temp - 1) / (base[i] - 1);

            tnopf += exp[i];
        }

        cout << base.size() << " " << tnopf << " ";
        cout << nov << " " << sov << endl;
    }

    return 0;
}
