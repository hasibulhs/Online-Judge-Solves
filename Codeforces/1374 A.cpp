#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, y, n, k, t;

    cin >> t;
    while(t--)
    {
        cin >> x >> y >> n;

        k = n / x;
        k *= x;

        if(n - k < y) k -= x;
        k += y;

        cout << k << endl;
    }

    return 0;
}
