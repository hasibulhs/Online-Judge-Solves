#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1001], freq[1001];
    int l, c = 0, i, j;

    gets(s);
    l = strlen(s) - 1;
    memset(freq,'1',1001);

    for(i=1; i<l; i=i+3)
    {
        for(j=i+3; j<l; j=j+3)
        {
            if(s[i] == s[j]) freq[j] = '0';
        }
    }

    for(i=1; i<l; i=i+3)
    {
        if(freq[i] == '1') c++;
    }

    printf("%d\n", c);
    return 0;
}
