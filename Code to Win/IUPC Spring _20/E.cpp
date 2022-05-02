#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, i, j, sum, num, len, d;
    string n;

    cin >> t;
    for(i = 1; i <= t; i++)
    {
        sum = 0;

        cin >> n;
        len = n.length();
        for(j = 0; j < len; j++) sum += n[j] - '0';

        d = log10(sum) + 1;
        while(d > 1)
        {
            num = sum;
            sum = 0;

            while(num != 0)
            {
                sum += num % 10;
                num /= 10;
            }

            d = log10(sum) + 1;
        }

        if(sum == 9) cout << "Case " << i << ": YES" << endl;
        else cout << "Case " << i << ": NO" << endl;
    }

    return 0;
}
