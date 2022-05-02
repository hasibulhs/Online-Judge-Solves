#include<stdio.h>
int main()
{
    int t, n, ary[20], i, j, max, min;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        for(j=0; j<n; j++)
        {
            scanf("%d", &ary[j]);
        }

        max = min = ary[0];

        for(j=0; j<n; j++)
        {
            if(ary[j] > max)
                max = ary[j];

            if(ary[j] < min)
                min = ary[j];
        }

        printf("%d\n", 2 * (max - min));
    }
    return 0;
}
