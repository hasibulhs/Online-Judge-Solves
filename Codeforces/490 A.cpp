#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c1 = 0, c2 = 0, c3 = 0, m;

    scanf("%d", &n);
    int a[n+1], i, a1[n], a2[n], a3[n];

    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] == 1) a1[c1] = i, c1++;
        else if (a[i] == 2) a2[c2] = i, c2++;
        else a3[c3] = i, c3++;
    }

    m = min(c1, c2);
    m = min(m, c3);
    printf("%d\n", m);

    for(i=0; i<m; i++) printf("%d %d %d\n", a1[i], a2[i], a3[i]);

    return 0;
}
