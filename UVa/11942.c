#include<stdio.h>
int main()
{
    int t, n[10], i, j, x, y;

    printf("Lumberjacks:\n");

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        x = y = 0;

        for(j=0; j<10; j++) scanf("%d", &n[j]);

        for(j=0; j<9; j++)
        {
            if(n[j] < n[j+1]) x++;
            else if((n[j] > n[j+1])) y++;
        }

        if(x == 0 || y == 0) printf("Ordered\n");
        else if(x > 0 && y > 0) printf("Unordered\n");
    }
    return 0;
}
