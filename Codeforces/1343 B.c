#include<stdio.h>
int main()
{
    int t, n, i, temp, a[100009];

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);

        if((n / 2) % 2) printf("NO\n");
        else
        {
            printf("YES\n");

            temp = 2;
            for(i=0; i<n/2; i++)
            {
                a[i] = temp;
                printf("%d ", a[i]);
                temp = temp + 4;
            }

            temp = -1;
            for(i=0; i<n/2; i++)
            {
                printf("%d ", a[i] - temp);
                temp = -temp;
            }
            printf("\n");
        }
    }
    return 0;
}
