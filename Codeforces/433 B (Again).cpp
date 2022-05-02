#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, m, l, r, type;

    scanf("%d", &n);
    long long int arr1[n+1], arr2[n+1];
    arr1[0] = arr2[0] = 0;

    for(i=1; i<=n; i++)
    {
        scanf("%lld", &arr1[i]);
        arr2[i] = arr1[i];
    }

    sort(arr2 + 1, arr2 + n + 1);

    for(i=1; i<=n; i++)
    {
        arr1[i] = arr1[i-1] + arr1[i];
        arr2[i] = arr2[i-1] + arr2[i];
    }

    scanf("%d", &m);
    while(m--)
    {
        scanf("%d %d %d", &type, &l, &r);
        if(type == 1)
            printf("%lld\n", arr1[r] - arr1[l-1]);
        else
            printf("%lld\n", arr2[r] - arr2[l-1]);
    }
    return 0;
}

