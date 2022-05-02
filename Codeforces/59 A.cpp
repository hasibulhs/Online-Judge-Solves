#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    int l, i, c1 = 0, c2 = 0;

    scanf("%s", &s);
    l = strlen(s);

    for(i=0; i<l; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            c1++;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            c2++;
    }

    if(c1 >= c2)
        printf("%s\n", strlwr(s));
    else
        printf("%s\n", strupr(s));

    return 0;
}
