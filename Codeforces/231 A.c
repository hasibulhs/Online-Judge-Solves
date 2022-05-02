#include<stdio.h>
int main()
{
    int n, x, y, z, c = 0;

    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d %d", &x, &y, &z);

        if(x && y || y && z || x && z)
            c++;
    }
    printf("%d\n", c);
    return 0;
}
