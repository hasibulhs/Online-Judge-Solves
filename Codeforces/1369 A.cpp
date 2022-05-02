#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, t;

    cin >> t;
    while(t--)
    {
        cin >> x;

        if(x % 4 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
