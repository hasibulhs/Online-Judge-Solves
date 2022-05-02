#include<stdio.h>
#include<string.h>
int main()
{
    int a1, a2, a3, a4, i, cal = 0;
    char s[100001];

    scanf("%d %d %d %d %s", &a1, &a2, &a3, &a4, &s);

    for(i=0; i<strlen(s); i++)
    {
        if(s[i] == '1')
            cal += a1;
        else if(s[i] == '2')
            cal += a2;
        else if(s[i] == '3')
            cal += a3;
        else if(s[i] == '4')
            cal += a4;
    }

    printf("%d\n", cal);
    return 0;
}
