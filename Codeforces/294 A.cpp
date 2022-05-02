#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y, i;
    scanf("%d", &n);

    int a[n+1];
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);
    while(m--)
    {
        scanf("%d %d", &x, &y);
        a[x-1] = a[x-1] + (y - 1);
        a[x+1] = a[x+1] + (a[x] - y);
        a[x] = 0;
    }
    for(i=1; i<=n; i++)
        printf("%d\n", a[i]);

    return 0;
}
