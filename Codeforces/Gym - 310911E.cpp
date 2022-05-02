#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

const ll mx = 1000005;
bool mark[mx+5];
ll spf[mx+5];

void precall()
{
    for(ll i = 2; i * i <= mx; i++)
    {
        if(!mark[i])
        {
            spf[i] = i;
            for(ll j = i * 2; j <= mx; j += i)
            {
                mark[j] = 1;

                if(spf[j] == 0) spf[j] = i;
            }
        }
    }

    for(ll i = 2; i <= mx; i++) if(spf[i] == 0) spf[i] = i;
}

ll power(ll a, ll b)
{
    if(b == 0) return 1;

    ll x;
    if(b&1)
    {
        x = power(a, b-1);
        return x*a;
    }

    else
    {
        x = power(a, b/2);
        return x*x;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    precall();

    ll n, x;
    scanf("%lld", &n);

    for(ll i = 0; i < n; i++)
    {
        scanf("%lld", &x);
        ll lpf = spf[x], gpf = 0, dpf = 0, tnopf = 0, nov = 1, sov = 1;

        while(x > 1)
        {
            gpf = max(gpf, spf[x]);

            ll c = 0;
            ll d = spf[x];
            while(x % d == 0)
            {
                x /= d;
                c++;
                tnopf++;
            }

            nov *= (c + 1);
            sov *= (power(d, c+1) - 1)/(d - 1);
            dpf++;
        }

        printf("%lld %lld %lld %lld %lld %lld\n", lpf, gpf, dpf, tnopf, nov, sov);
    }

    return 0;
}
