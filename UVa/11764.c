#include<stdio.h>
int main()
{
    int t, n, x[50], i, j, h, l;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        h = l = 0;

        scanf("%d", &n);
        for(j=0; j<n; j++)
        {
            scanf("%d", &x[j]);
        }

        for(j=0; j<n-1; j++)
        {
            if(x[j] < x[j+1]) h++;
            else if(x[j] > x[j+1]) l++;
        }

        printf("Case %d: %d %d\n", i, h, l);
    }
    return 0;
}
