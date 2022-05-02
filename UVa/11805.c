#include<stdio.h>
int main()
{
    int t, i, n, k, p, j, c;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d", &n, &k, &p);

        c = k;
        for(j=1; j<=p; j++)
        {
            c++;
            if(c > n) c = 1;
        }

        printf("Case %d: %d\n", i, c);
    }
    return 0;
}
