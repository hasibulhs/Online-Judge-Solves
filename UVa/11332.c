#include<stdio.h>
int main()
{
    int n, num, sum;

    while(scanf("%d", &n))
    {
        sum = 0;
        if(n == 0)
            break;

        while(n != 0)
        {
            sum = sum + (n % 10);
            n = n / 10;
        }

        while(((sum / 10) % 10) != 0)
        {
            num = sum;
            sum = 0;
            while(num != 0)
            {
                sum = sum + (num % 10);
                num = num / 10;
            }
        }

        printf("%d\n", sum);
    }
    return 0;
}
