#include<stdio.h>
int main()
{
    int t, i;
    double l, red, green;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%lf", &l);

        red = 3.1415926535897932384626433 * (l / 5) * (l / 5);
        green = (l * l * 0.6) - red;

        printf("%0.2lf %0.2lf\n", red, green);
    }
    return 0;
}
