#include<stdio.h>
#include<string.h>
int main()
{
    char s[5];
    int i,l;

    for(i=1 ;; i++)
    {
        gets(s);
        if(!strcmp(s,"*")) break;
        l = strlen(s);

        if(l == 4)
        {
            printf("Case %d: Hajj-e-Akbar\n", i);
        }

        else
        {
            printf("Case %d: Hajj-e-Asghar\n", i);
        }
    }
    return 0;
}
