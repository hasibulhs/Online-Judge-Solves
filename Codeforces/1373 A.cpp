#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int a, b, c;
    int t;

    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;

        if(a >= c) cout << "-1 ";
        else cout << "1 ";

        if(a * b <= c) cout << "-1" << endl;
        else cout << b << endl;
    }

    return 0;
}
