#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n, k;
    vector <long long int> divs;
    cin >> n >> k;

    for(long long int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            divs.push_back(i);
            if(i != n / i) divs.push_back(n / i);
        }
    }

    sort(divs.begin(), divs.end());
    if(k > divs.size()) cout << "-1" << endl;
    else cout << divs[k - 1] << endl;

    return 0;
}
