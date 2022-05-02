#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int n, a[50], i, c1, c2, c, t;

    scanf("%d", &t);
    while(t--)
    {
        c1 = c2 = c = 0;
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i] % 2 == 0) c1++;
            else c2++;
        }

        if(n == 1)
        {
            if(a[0] % 2 == 0) printf("0\n");
            else printf("-1\n");
        }

        if(n > 1 && n % 2 == 0)
        {
            if(c1 != c2) printf("-1\n");
            else
            {
                for(i=0; i<n; i++)
                {
                    if(i % 2 != a[i] % 2) c++;
                }
                printf("%d\n", c / 2);
            }
        }

        if(n > 1 && n % 2 != 0)
        {
            if((c1-1) != c2) printf("-1\n");
            else
            {
                for(i=0; i<n; i++)
                {
                    if(i % 2 != a[i] % 2) c++;
                }
                printf("%d\n", c / 2);
            }
        }
    }

    return 0;
}
