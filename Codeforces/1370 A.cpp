#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t;

    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << n / 2 << endl;
    }

    return 0;
}
