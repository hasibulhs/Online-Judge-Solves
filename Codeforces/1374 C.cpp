#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t, i, c;
    string s;

    cin >> t;
    while(t--)
    {
        c = 0;
        cin >> n >> s;

        for(i = 0; i < n; i++)
        {
            if(s[i] == '(') c++;
            if(c && s[i] == ')') c--;
        }

        cout << c << endl;
    }

    return 0;
}
