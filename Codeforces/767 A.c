#include<stdio.h>
#include<string.h>
int main()
{
    int n, x, next, i, a[100005];

    scanf("%d", &n);
    memset(a, 0, sizeof(a)); //memset(a, 0, 4 * 100005);
    next = n;

    for(i=0; i<n; i++)
    {
        scanf("%d", &x);
        a[x] = 1;

        while(a[next]) printf("%d ", next--);
        printf("\n");
    }
    return 0;
}
