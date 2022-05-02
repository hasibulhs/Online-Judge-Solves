#include<stdio.h>
int main()
{
    int n, i, a[8], c = 0, sum = 0;

    scanf("%d", &n);
    for(i=1; i<=7; i++)
        scanf("%d", &a[i]);

    while(1)
    {
        for(i=1 ;i<=7; i++)
        {
            sum = sum + a[i];
            if(sum >= n)
            {
                printf("%d\n", i);
                c = 1;
                break;
            }
        }
        if(c) break;
    }
    return 0;
}
