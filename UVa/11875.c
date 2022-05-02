#include<stdio.h>
int main()
{
    int t, i, j, n, x[10];

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        for(j=0; j<n; j++) scanf("%d", &x[j]);

        printf("Case %d: %d\n", i, x[n/2]);
    }
    return 0;
}
