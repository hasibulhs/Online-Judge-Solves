#include<stdio.h>
int main()
{
    char s[100001];
    int n, i, a = 0, d = 0;

    scanf("%d %s", &n, &s);

    for(i=0; i<n; i++)
    {
        if(s[i] == 'A')
            a++;
        else if(s[i] == 'D')
            d++;
    }

    if(a > d)
        printf("Anton\n");
    else if(a < d)
        printf("Danik\n");
    else
        printf("Friendship\n");

    return 0;
}
