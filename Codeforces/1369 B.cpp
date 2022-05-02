#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t, t1, t2, i;
    string s;

    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        t1 = t2 = 0;

        for(i = 0; i < n && s[i] == '0'; i++) cout << s[i];

        for(i = 0; i < n; i++)
        {
            if(s[i] == '1') t1 = 1;
            else if(s[i] == '0' && t1) t2 = 1;
        }
        if(t1 && t2) cout << 0;

        for(i = n - 1; i >= 0 && s[i] == '1'; i--) cout << s[i];

        cout << endl;
    }

    return 0;
}
