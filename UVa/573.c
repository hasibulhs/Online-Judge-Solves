#include<stdio.h>
int main()
{
    int i;
    double h, u, d, f, ff, x, y, climb, slide;

    while(scanf("%lf %lf %lf %lf", &h, &u, &d, &f) && h)
    {
        x = u;
        slide = u - d;
        ff = u * (f / 100);

        for(i=1 ;; i++)
        {
            if(u > h)
            {
                printf("success on day 1\n");
                break;
            }

            if(d > u)
            {
                printf("failure on day 1\n");
                break;
            }

            x = x - ff;
            if(x < 0) x = 0;
            climb = slide + x;

            if(climb > h)
            {
                printf("success on day %d\n", i+1);
                break;
            }

            slide = climb - d;

            if(slide < 0)
            {
                printf("failure on day %d\n", i+1);
                break;
            }
        }
    }
    return 0;
}
