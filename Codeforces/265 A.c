#include<stdio.h>
#include<string.h>
int main()
{
    char s[51], t[51];
    int i = 0, j = 0, l, c = 1;

    scanf("%s %s", &s, &t);
    l = strlen(t);

    while(l--)
    {
        if(s[i] == t[j])
        {
            c++;
            i++;
            j++;
        }
        else j++;
    }

    printf("%d\n", c);
    return 0;
}
