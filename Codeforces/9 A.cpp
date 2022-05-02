#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y, w, c, i;

    scanf("%d %d", &y, &w);

    c = max(y, w);
    c = (6 - c) + 1;

    if(c % 2 == 1)
    {
        if(c == 3) printf("1/2\n");
        else printf("%d/6\n", c);
    }
    else
    {
        if(c == 4) printf("2/3\n");
        else printf("1/%d\n", 6/c);
    }

    return 0;
}
