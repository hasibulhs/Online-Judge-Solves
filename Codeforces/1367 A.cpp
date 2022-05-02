#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int t;
    char s[105];
    scanf("%d", &t);

    while(t--)
    {
        scanf("%s", s);
        printf("%c", s[0]);
        for(int i = 1; i<strlen(s); i+=2) printf("%c", s[i]);
        printf("\n");
    }

    return 0;
}
