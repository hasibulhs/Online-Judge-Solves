#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, l;
    char s[101];

    scanf("%s", &s);
    l = strlen(s);

    for(i=0; i<l; i=i+2)
    {
        for(j=i+2; j<l; j=j+2)
        {
            if(s[i] > s[j]) swap(s[i], s[j]);
        }
    }

    puts(s);
    printf("\n");
    return 0;
}
