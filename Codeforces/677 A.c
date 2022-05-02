#include<stdio.h>
int main()
{
    int n, h, x, w = 0;

    scanf("%d %d", &n, &h);
    while(n--)
    {
        scanf("%d", &x);

        if(x > h)
            w += 2;
        else
            w += 1;
    }
    printf("%d\n", w);
    return 0;
}
