#include<stdio.h>
#include<string.h>
int main()
{
    char s[99999];
    int t, l, i;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%s", &s);
        l = strlen(s);

        if(!strcmp(s, "1") || !strcmp(s, "4") || !strcmp(s, "78")) printf("+\n");
        else if(s[l-1] == '5' && s[l-2] == '3') printf("-\n");
        else if(s[0] == '9' && s[l-1] == '4') printf("*\n");
        else printf("?\n");
    }
    return 0;
}
