#include<stdio.h>
int main()
{
    int t, n, i;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        printf("%d\n", abs((((((((n * 567) / 9) + 7492) * 235) / 47) - 498) / 10) % 10));
    }
    return 0;
}
