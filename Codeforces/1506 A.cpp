#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int n, m, x, r, c;
    int t;

    cin >> t;
    while(t--)
    {
        cin >> n >> m >> x;

        c = x / n;
        r = x % n;

        if(r == 0) r = n;
        else c++;

        cout << ((r - 1) * m) + c << endl;
    }

    return 0;
}
