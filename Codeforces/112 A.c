#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str1[101], str2[101];
    int l, i;

    scanf("%s %s", &str1, &str2);
    l = strlen(str1);

    for(i=0; i<l; i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    printf("%d\n", strcmp(str1, str2));
    return 0;
}
