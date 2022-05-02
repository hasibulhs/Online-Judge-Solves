#include<stdio.h>
int main()
{
    int c;
    double h, u, d, f, ff, total;

    while(scanf("%lf %lf %lf %lf", &h, &u, &d, &f) && h)
    {
        c = total = 0;
        ff = u * (f / 100);

        while(total < h)
        {
            if(u > 0) total = total + u;
            c++;

            if(total > h) break;

            total = total - d;
            u = u - ff;

            if(total < 0) break;
        }

        if(total > h) printf("success on day %d\n", c);
        else printf("failure on day %d\n", c);
    }
    return 0;
}

