#include<stdio.h>
#include<string.h>
int main()
{
    char a[14];
    int i;

    for(i=1 ;; i++)
    {
        gets(a);
        if(a[0] == '#') break;

        if(!strcmp(a, "HELLO"))
        {
            printf("Case %d: ENGLISH\n", i);
        }

        else if(!strcmp(a, "HOLA"))
        {
            printf("Case %d: SPANISH\n", i);
        }

        else if(!strcmp(a, "HALLO"))
        {
            printf("Case %d: GERMAN\n", i);
        }

        else if(!strcmp(a, "BONJOUR"))
        {
            printf("Case %d: FRENCH\n", i);
        }

        else if(!strcmp(a, "CIAO"))
        {
            printf("Case %d: ITALIAN\n", i);
        }

        else if(!strcmp(a, "ZDRAVSTVUJTE"))
        {
            printf("Case %d: RUSSIAN\n", i);
        }

        else
        {
            printf("Case %d: UNKNOWN\n", i);
        }
    }
    return 0;
}
