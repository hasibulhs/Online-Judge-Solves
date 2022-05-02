#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int n, temp, t, i, c1, c2;

    scanf("%d", &t);
    while(t--)
    {
        c1 = c2 = 0;

        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%d", &temp);

            if(temp % 2)
            {
                if(!(i % 2)) c1++;
            }

            else
            {
                if(i % 2) c2++;
            }
        }

        if(c1 != c2) printf("-1\n");
        else printf("%d\n", c1);
    }

    return 0;
}
