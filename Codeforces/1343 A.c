#include<stdio.h>
int main()
{
    int t;
    long long int n, i, temp;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld", &n);
        for(i=4; i<=1000000000; i=i*2)
        {
            temp = i - 1;
            if(n % temp == 0) break;
        }
        printf("%d\n", n / temp);
    }
    return 0;
}
