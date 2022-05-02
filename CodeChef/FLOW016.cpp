#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a == 0) return b;
    if(b == 0) return a;

    if(a < b) swap(a, b);
    return gcd(a % b, b);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, a, b;

    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        int temp = gcd(a, b);
        cout << temp << " " << (1LL * a * b) / temp << endl;
    }

    return 0;
}
