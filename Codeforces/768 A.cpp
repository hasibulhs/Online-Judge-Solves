#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, i, c = 0;

    scanf("%d", &n);
    int a[n+1];

    for(i=1; i<=n; i++) scanf("%d", &a[i]);
    sort(a+1, a+n+1);

    for(i=1; i<=n; i++)
    {
        if(a[i] > a[1] && a[i] < a[n]) c++;
    }
    printf("%d\n", c);

    return 0;
}
