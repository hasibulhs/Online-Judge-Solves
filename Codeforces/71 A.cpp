#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, l;
    char s[101];

    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", &s);
        l = strlen(s);

        if(l <= 10) puts(s), printf("\n");
        else
        {
            printf("%c%d%c\n", s[0], l-2, s[l-1]);
        }
    }
    return 0;
}
