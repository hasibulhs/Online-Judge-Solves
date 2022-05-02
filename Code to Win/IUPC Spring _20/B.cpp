#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, t, i;

    cin >> t;
    for(i = 1; i <= t; i++)
    {
        cin >> a >> b >> c;

        if(a == c) cout << "Case " << i << " : Badal slapped Fojael" << endl;
        else cout << "Case " << i << " : Fojael slapped Badal" << endl;
    }

    return 0;
}
