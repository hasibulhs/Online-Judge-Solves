#include<stdio.h>
int main()
{
    int n, b, h, w, p, i, j, sum, ans;

    while(scanf("%d %d %d %d", &n, &b, &h, &w) != EOF)
    {
        int a[w];
        ans = b + 1;

        for(i=1; i<=h; i++)
        {
            scanf("%d", &p);

            for(j=0; j<w; j++)
            {
                scanf("%d", &a[j]);
            }

            for(j=0; j<w; j++)
            {
                if(a[j] >= n)
                {
                    sum = n * p;
                    break;
                }

                else
                {
                    sum = 0;
                }
            }

            if(sum > 0 && sum < ans) ans = sum;
        }

        if(ans < b) printf("%d\n", ans);
        else printf("stay home\n");
    }
    return 0;
}
