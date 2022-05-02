#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0, i;

    scanf("%d", &n);

    char s[n+1];
    scanf("%s", &s);

    for(i=0; i<strlen(s); i++)
    {
        if(s[i] == s[i+1])
            c++;
    }

    printf("%d\n", c);
    return 0;
}
