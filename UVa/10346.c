#include<stdio.h>
int main()
{
    int n, k, x;

    while(scanf("%d %d", &n, &k) != EOF)
    {
        if(n >= k)
        {
            x = n;

            while(n >= k)
            {
                x = x + (n / k);
                n = (n / k) + (n % k);
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
