#include<bits/stdc++.h>
using namespace std;

int F(int x, int n, int m)
{
    if(n == 0) return 1;
    if(n % 2 == 0)
    {
        int temp = F(x, n / 2, m);
        return (temp * temp) % m;
    }
    else return ((x % m) * F(x, n-1, m)) % m;
}

int main()
{
    int x, n, m;

    while(scanf("%d %d %d", &x, &n, &m) != EOF)
    {
        printf("%d\n", F(x, n, m));
    }

    return 0;
}
