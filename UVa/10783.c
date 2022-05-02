#include<stdio.h>
int main()
{
    int a, b, t, i, j, temp, sum;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        sum = 0;
        scanf("%d %d", &a, &b);

        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }

        for(j=a; j<=b; j++)
        {
            if(j % 2 != 0)
            {
                sum = sum + j;
            }
        }

        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
