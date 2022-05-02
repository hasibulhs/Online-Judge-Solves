#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int cur, temp, l, i;
    int t;
    string s;

    cin >> t;
    while(t--)
    {
        cin >> s;
        cur = temp = 0;
        l = s.length();

        for(i = 0; i < l; i++)
        {
            if(s[i] == '+') cur++;
            else cur--;

            if(cur < 0)
            {
                temp += i + 1;
                cur = 0;
            }
        }

        cout << temp + l << endl;
    }

    return 0;
}
