#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n, i;

    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++) scanf("%d", &a[i]);

    for(i=0; i<n; i++)
    {
        if(i == 0) printf("%d %d\n", abs(a[i] - a[i+1]), abs(a[i] - a[n-1]));
        else if(i == n-1) printf("%d %d\n", abs(a[n-1] - a[n-2]), abs(a[n-1] - a[0]));
        else printf("%d %d\n", min(abs(a[i] - a[i-1]), abs(a[i] - a[i+1])), max(abs(a[i] - a[n-1]), abs(a[i] - a[0])));
    }
    return 0;
}
