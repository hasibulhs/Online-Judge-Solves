#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    int l, i, c = 0;

    scanf("%s", &s);
    l = strlen(s);
    sort(s, s + l);

    for(i=0; i<l; i++)
    {
        if(s[i] != s[i+1])
            c++;
    }

    if(c % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}
