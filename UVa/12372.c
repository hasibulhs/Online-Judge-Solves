#include<stdio.h>
int main()
{
    int t, x, y, z, i;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d", &x, &y, &z);

        if(x <= 20 && y <= 20 && z <= 20)
            printf("Case %d: good\n", i);

        else
            printf("Case %d: bad\n", i);
    }
    return 0;
}
