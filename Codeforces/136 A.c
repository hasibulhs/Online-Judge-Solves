#include<stdio.h>
int main()
{
    int n, x, i;

    scanf("%d", &n);
    int a[n+1];

    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        a[x] = i;
    }

    for(i=1; i<=n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}
