#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int d, temp, ans = 800, i, j;
    string s;
    cin >> s;

    for(i = 0; i < s.length() - 2; i++)
    {
        temp = 0;
        for(j = i; j < i + 3; j++)
        {
            temp = temp * 10;
            temp = temp + (s[j] - '0');
        }

        d = abs(753 - temp);
        if(d < ans) ans = d;
    }

    cout << ans << endl;
    return 0;
}
