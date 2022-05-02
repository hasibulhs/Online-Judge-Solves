#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int ll;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t, temp, g, c = 0;
    cin >> t >> temp;
    g = temp;
    t--;

    while(t--)
    {
        cin >> temp;
        g = __gcd(g, temp);
    }

    for(ll i = 1; i * i <= g; i++)
    {
        if(g % i == 0)
        {
            c++;
            if(i != g / i) c++;
        }
    }

    cout << c << '\n';
    return 0;
}
