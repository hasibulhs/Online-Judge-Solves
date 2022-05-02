#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[100005], ch2[100005];

    scanf("%s %s", ch1, ch2);

    if(!strcmp(ch1, ch2)) printf("-1\n");
    else printf("%d\n", strlen(ch1) > strlen(ch2) ? strlen(ch1) : strlen(ch2));

    return 0;
}
