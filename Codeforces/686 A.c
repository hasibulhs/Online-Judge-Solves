#include<stdio.h>
int main()
{
    long long int n, x, d, c = 0;
    char ch[2];

    scanf("%lld %lld", &n, &x);
    while(n--)
    {
        scanf("%s %lld", ch, &d);
        if(ch[0] == '+') x += d;
        else
        {
            if(x >= d) x -= d;
            else c++;
        }
    }

    printf("%lld %lld\n", x, c);
    return 0;
}
