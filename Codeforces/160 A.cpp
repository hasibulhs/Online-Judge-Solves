#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n, i, temp, s1 = 0, s2;

    scanf("%d", &n);
    int a[n+1];

    for(i=1; i<=n; i++) scanf("%d", &a[i]);
    sort(a+1, a+n+1, greater <int> ());

    for(i=1; i<=n; i++)
    {
        s1 += a[i];

        temp = n;
        s2 = 0;
        while(temp > i) s2 += a[temp--];

        if(s1 > s2)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
