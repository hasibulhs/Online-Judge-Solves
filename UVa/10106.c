#include<stdio.h>
#include<string.h>

int main()
{
    char x[251], y[251], mul[900], sum[900];
    int l1, l2, l3, l4, i, j, k, a, b, r, c;

    while(gets(x), gets(y))
    {
        l1 = strlen(x);
        l2 = strlen(y);

        l3 = l4 = c = 0;
        memset(sum,'0',900);

        for(i=l2-1; i>=0; i--)
        {
            memset(mul,'0',900);
            a = y[i] - '0';
            r = 0;

            for(j=l1-1, k=0; j>=0; j--, k++)
            {
                b = x[j] - '0';
                mul[k] = (((a * b) + r) % 10) + '0';
                r = ((a * b) + r) / 10;
            }

            while(r > 0)
            {
                a = mul[k] - '0';
                mul[k] = ((a + r) % 10) + '0';
                r = (a + r) / 10;
                k++;
            }

            l3 = k;
            for(k=0; k<l3; k++)
            {
                a = sum[k+c] - '0';
                b = mul[k] - '0';

                sum[k+c] = ((a + b + r) % 10) + '0';
                r = (a + b + r) / 10;
            }

            while(r > 0)
            {
                a = sum[k+c] - '0';
                sum[k+c] = ((a + r) % 10) + '0';
                r = (a + r) / 10;
                k++;
            }

            if(k+c > l4) l4 = k+c;
            c++;
        }

        if(strcmp(x, "0") == 0 || strcmp(y, "0") == 0)
            printf("0");
        else
            for(i=l4-1; i>=0; i--) printf("%c", sum[i]);

        printf("\n");
    }
    return 0;
}
