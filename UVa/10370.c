#include<stdio.h>
int main()
{
    int t, i, n, sum;
    float avg, c;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int x[n];
        sum = avg = c = 0;

        for(i=0; i<n; i++)
        {
            scanf("%d", &x[i]);
            sum = sum + x[i];
        }
        avg = sum / n;

        for(i=0; i<n; i++)
        {
            if(x[i] > avg) c++;
        }
        printf("%0.3f%c\n", (c / n) * 100, '%');
    }
    return 0;
}
