#include<stdio.h>
int main()
{
    int n, t, k, d, t1, t2;

    scanf("%d %d %d %d", &n, &t, &k, &d);

    t1 = ((n + k - 1) / k) * t;
    t2 = d + t;

    if(t1 > t2) printf("YES\n");
    else printf("NO\n");

    return 0;
}
