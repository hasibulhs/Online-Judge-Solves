#include<stdio.h>
int main()
{
    int k, r, i;
    scanf("%d %d", &k, &r);

    for(i=1 ;; i++)
    {
        if(k * i % 10 == 0 || k * i % 10 == r)
           {
               printf("%d\n", i);
               break;
           }
    }
    return 0;
}
