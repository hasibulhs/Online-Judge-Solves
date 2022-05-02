#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, amnt, j, x, g, k, y, flag = 1, ary_2[10];
    char ary_1[10][13], temp[13];

    while(scanf("%d", &n) != EOF)
    {

        for(i=0; i<n; i++)
            {
                scanf("%s", &ary_1[i]);
                ary_2[i] = 0;
            }

        for(i=0; i<n; i++)
        {
            scanf("%s %d %d", &temp, &amnt, &x);

            if(x == 0) y = amnt;
            else y = amnt % x;
            for(j=0; j<n; j++)
            {
                if(!strcmp(ary_1[j], temp))
                {
                    ary_2[j] = ary_2[j] - amnt + y;
                    break;
                }
            }

            if(x == 0) g = 0;
            else g = amnt / x;
            for(j=0; j<x; j++)
            {
                scanf("%s", &temp);
                for(k=0; k<n; k++)
                {
                    if(!strcmp(ary_1[k], temp))
                    {
                        ary_2[k] = ary_2[k] + g;
                        break;
                    }
                }
            }
        }

        if(flag != 1) printf("\n");

        for(i=0; i<n; i++)
            printf("%s %d\n", ary_1[i], ary_2[i]);

        flag++;
    }
    return 0;
}
