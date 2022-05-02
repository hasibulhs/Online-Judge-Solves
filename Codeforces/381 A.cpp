#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, l, r, S = 0, D = 0;

    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    l = 0;
    r = n - 1;

    for(i=1; i<=n; i++)
    {
       if(a[l] >= a[r])
       {
           if(i % 2) S += a[l];
           else D += a[l];

           l++;
       }
       else
       {
           if(i % 2) S += a[r];
           else D += a[r];

           r--;
       }
    }

    printf("%d %d\n", S, D);
    return 0;
}
