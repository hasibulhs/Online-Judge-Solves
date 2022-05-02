#include<stdio.h>
int main()
{
    int n, x;

    while(scanf("%d", &n) != EOF)
    {
        if(n >= 2)
        {
            x = n;
            n = n + 1;

            while(n >= 3)
            {
                x = x + (n / 3);
                n = (n / 3) + (n % 3);
            }
            printf("%d\n", x);
        }

        else
        {
            printf("%d\n", n);
        }
    }
    return 0;
}
