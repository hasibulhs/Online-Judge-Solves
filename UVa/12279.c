#include<stdio.h>
int main()
{
    int n, i, j, x, t1, t2;

    for(i=1 ;; i++)
    {
        scanf("%d", &n);
        if(n == 0) break;

        t1 = t2 = 0;

        for(j=1; j<=n; j++)
        {
            scanf("%d", &x);

            if(x >= 1 && x <= 99) t1++;
            if(x == 0) t2++;
        }
        printf("Case %d: %d\n", i, (t1 - t2));
    }
    return 0;
}
