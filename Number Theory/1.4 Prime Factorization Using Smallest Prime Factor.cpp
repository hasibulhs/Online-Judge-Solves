#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector <int> v;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) // finding smallest prime
        {
            while (n % i == 0) // to save time, we will keep checking that i can still divide others
            {
                v.push_back(i);
                n /= i;
            }
        }
    }

    if (n > 1) v.push_back(n); // if the last value is a prime, it won't be added in the vector because of
    // sqrt(n) calculation, or the n can be a prime itself, so we will add it manually
    for (auto x: v) cout << x << ' ';

    return 0;
}
