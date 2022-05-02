#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int getDiv(int n)
{
    int i, c = 0;

    for(i = 1; i * i <= n; i++)
    {
        if(i * i == n) c += 1;
        else if(n % i == 0) c += 2;
    }

    return c;
}

int main()
{
    int x, y, t;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n", getDiv(gcd(x, y)));
    }

    return 0;
}
