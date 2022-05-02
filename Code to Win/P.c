#include<stdio.h>
int main()
{
    int t, i;
    long long int j, n, a, c;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        c = 0;
        scanf("%lld %lld", &n, &a);

        for(j=1; j<=n; j=j+2)
        {
            if((j % a) == 0) c++;
        }

        printf("%lld\n", c);
    }
    return 0;
}
