#include<stdio.h>
int main()
{
    int n, b, d, i, sum = 0, c = 0;

    scanf("%d %d %d", &n, &b, &d);
    int a[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] <= b)
        {
            sum = sum + a[i];
        }

        if(sum > d) c++, sum = 0;
    }

    printf("%d\n", c);
    return 0;
}
