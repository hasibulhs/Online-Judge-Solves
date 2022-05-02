#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, len, flag;
    string str1, str2;

    cin >> t;
    while(t--)
    {
        flag = 0;
        int f[26] = {0};
        cin >> n >> str1;

        auto st = unique(str1.begin(), str1.end());
        str2 = string(str1.begin(), st);

        len = str2.length();
        for(int i = 0; i < len; i++) f[str2[i] - 'A']++;

        for(int i = 0; i < 26; i++)
        {
            if(f[i] > 1)
            {
                flag = 1;
                break;
            }
        }

        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}
