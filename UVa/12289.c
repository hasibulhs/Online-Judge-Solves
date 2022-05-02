#include<stdio.h>
#include<string.h>
int main()
{
    char s[5];
    int t, i, l;

    scanf("%d", &t);
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(s); //printf("%s", &s);
        l = strlen(s);

        if(l == 3)
        {
            if((s[0] == 'o' && s[1] == 'n') || (s[0] == 'o' && s[2] == 'e') || (s[1] == 'n' && s[2] == 'e'))
            {
                printf("1\n");
            }

            else
            {
                printf("2\n");
            }
        }

        else
        {
            printf("3\n");
        }
    }
    return 0;
}
