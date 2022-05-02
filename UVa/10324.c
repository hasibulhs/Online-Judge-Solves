#include<stdio.h>
int main()
{
    char s[1000001];
    int n, i, j, k, temp, c = 1, flag;

    while(scanf("%s %d", &s, &n) != EOF)
    {
        printf("Case %d:\n", c);

        while(n--)
        {
            scanf("%d %d", &i, &j);
            flag = 1;

            if(i > j)
            {
                temp = i;
                i = j;
                j = temp;
            }

            for(k=i; k<j; k++)
            {
                if(s[k] != s[k+1])
                {
                    flag = 0;
                    break;
                }
            }

            if(flag)
                printf("Yes\n");
            else
                printf("No\n");
        }
        c++;
    }
    return 0;
}
