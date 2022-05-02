#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int c1, c2, t, i;
    char s[105];

    cin >> t;
    while(t--)
    {
        c1 = c2 = 0;
        cin >> s;

        for(i = 0; i < strlen(s); i++)
        {
            if(s[i] == '0') c1++;
            else c2++;
        }

        if((c1 % 2 != 0 && c1 <= c2) || (c2 % 2 != 0 && c2 <= c1)) cout << "DA" << endl;
        else cout << "NET" << endl;
    }

    return 0;
}
