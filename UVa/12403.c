#include<stdio.h>
int main()
{
    char s[100];
    int t, i, k, sum = 0;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%s", &s);

        if(!strcmp(s,"donate"))
        {
            scanf("%d", &k);
            sum = sum + k;
        }

        else
            printf("%d\n", sum);
        }
    return 0;
}
