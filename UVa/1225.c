#include<stdio.h>
int main()
{
    int t, n, i, j, temp;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        int cnt[10] = {0};

        scanf("%d", &n);
        for(j=1; j<=n; j++)
        {
            temp = j;
            while(temp != 0)
            {
                cnt[temp % 10]++;
                temp = temp / 10;
            }
        }

        for(j=0; j<10; j++)
        {
            printf("%d", cnt[j]);

            if(j < 9) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
