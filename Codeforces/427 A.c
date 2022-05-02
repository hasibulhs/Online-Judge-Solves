#include<stdio.h>
int main()
{
    int n, i, c = 0, temp = 0;

    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);

        temp += a[i];
        if(temp < 0)
        {
            c++;
            temp = 0;
        }
    }

    printf("%d\n", c);
    return 0;
}
