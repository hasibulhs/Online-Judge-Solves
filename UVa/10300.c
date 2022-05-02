#include<stdio.h>
int main()
{
    int t, f, size, ani, degree, i, j;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        int ans=0;

        scanf("%d", &f);
        for(j=0; j<f; j++)
        {
            scanf("%d%d%d", &size, &ani, &degree);
            ans = ans + (size*degree);
        }
        printf("%d\n", ans);
    }
    return 0;
}
