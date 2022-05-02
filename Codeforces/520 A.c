#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n, i, a[26], c = 0;

    scanf("%d", &n);

    char s[n+1];
    scanf("%s", s);

    memset(a, 0, sizeof(a));

    for(i=0; i<n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] = tolower(s[i]);
        if(!a[s[i] - 97]) a[s[i] - 97] = 1, c++;
    }

    if(c == 26) printf("YES\n");
    else printf("NO\n");

    return 0;
}
