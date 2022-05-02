#include<stdio.h>
int main()
{
    int n, i, j, c = 0;

    scanf("%d", &n);
    int a[n*2];

    for(i=0; i<n*2; i++)
        scanf("%d", &a[i]);

    for(i=0; i<(n*2)-1; i=i+2)
    {
        for(j=1; j<(n*2); j=j+2)
        {
            if(a[i] == a[j]) c++;
        }
    }

    printf("%d\n", c);
    return 0;
}
