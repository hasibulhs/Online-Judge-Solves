#include<stdio.h>
int main()
{
    int a, b, c, d, sum;

    while(scanf("%d %d %d %d", &a, &b, &c, &d))
    {
        if(a == 0 && b == 0 && c == 0 && d ==0) break;

        else
        {
            if(a>b) sum = a - b;
            else sum = a + (40 - b);

                if(b>c) sum = sum + c + (40 - b);
                else sum = sum + (c - b);

                    if(c>d) sum = sum + (c - d);
                    else sum = sum + c + (40 - d);

        }

        printf("%d\n", 1080 + (sum * 9));
    }
    return 0;
}
