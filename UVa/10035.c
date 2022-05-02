#include<stdio.h>
int main()
{
    unsigned int x, y;
    int carry, count, r1, r2;

    while(scanf("%u %u", &x, &y) == 2)
    {
        carry = 0;
        count = 0;

        if(x == 0 && y == 0)
        {
            break;
        }

        else
        {
            while(x != 0 || y != 0)
            {
                r1 = x % 10;
                r2 = y % 10;

                x = x / 10;
                y = y / 10;

                if((r1 + r2 + carry) > 9)
                {
                    count++;
                    carry = 1;
                }

                else
                {
                    carry = 0;
                }
            }

            if(count == 0)
            {
                printf("No carry operation.\n");
            }

            else if(count == 1)
            {
                printf("1 carry operation.\n");
            }

            else
            {
                printf("%d carry operations.\n", count);
            }
        }
    }

    return 0;
}
