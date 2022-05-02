#include<stdio.h>
int main()
{
    int t, i, j, l[10][100], x[10], max;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%s %d", &l[0], &x[0]);
        max = x[0];

        for(j=1; j<10; j++)
        {
            scanf("%s %d", &l[j], &x[j]);
            if(x[j] > max) max = x[j];
        }

        printf("Case #%d:\n", i);
        for(j=0; j<10; j++)
            if(x[j] == max) printf("%s\n", l[j]);
    }
    return 0;
}
