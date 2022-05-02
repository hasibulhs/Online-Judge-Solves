#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i = 0, j;

    scanf("%d %d", &n, &k);
    while(i < n)
    {
        j = 0;
        while(i < n && j < k)
        {
            printf("%c", 'a' + j);
            i++;
            j++;
        }
    }

    printf("\n");
    return 0;
}
