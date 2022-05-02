#include<bits/stdc++.h>
using namespace std;

unsigned nthUgly(unsigned n)
{
    unsigned ugly[n];
    unsigned i2 = 0, i3 = 0, i5 = 0;

    unsigned nm2 = 2;
    unsigned nm3 = 3;
    unsigned nm5 = 5;
    unsigned next_ugly_no = 1;
    ugly[0] = 1;

    for (int i = 1; i < n; i++)
    {
        next_ugly_no = min(nm2, min(nm3, nm5));
        ugly[i] = next_ugly_no;

        if (next_ugly_no == nm2)
        {
            i2 += 1;
            nm2 = ugly[i2] * 2;
        }

        if (next_ugly_no == nm3)
        {
            i3 += 1;
            nm3 = ugly[i3] * 3;
        }

        if (next_ugly_no == nm5)
        {
            i5 += 1;
            nm5 = ugly[i5] * 5;
        }
    }

    return next_ugly_no;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cout << "The 1500'th ugly number is " << nthUgly(1500) << "." << endl;
    return 0;
}
