#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    int l, i, temp, d, r = 0;

    scanf("%s", &s);
    l = strlen(s);

    temp = 97;
    for(i=0; i<l; i++)
    {
        d = abs(s[i] - temp);
        if(d > 13)
            d = 26 - d;

        r += d;
        temp = s[i];
    }

    printf("%d\n", r);
    return 0;
}
