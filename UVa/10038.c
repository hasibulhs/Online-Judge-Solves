#include<stdio.h>
int main()
{
    int i, n , c;

    while(scanf("%d", &n) != EOF)
    {
        int x[n], y[n];
        c = 1;

        for(i=0; i<n; i++)
        {
            scanf("%d", &x[i]);
            y[i] = 0;
        }

        for(i=0; i<n-1; i++) y[abs(x[i] - x[i+1])] = 1;

        for(i=1; i<n; i++)
        {
            if(!y[i])
            {
                c = 0;
                break;
            }
        }

        if(c) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
