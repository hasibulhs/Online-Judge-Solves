#include<stdio.h>
int main()
{
    int t, n, i, j, x, ans;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        ans = 0;

        for(j=0; j<n; j++)
        {
            scanf("%d", &x);

            if(x > ans) ans = x;
        }

        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}
