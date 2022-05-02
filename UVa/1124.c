#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000000];
    long int l, i;

    while(gets(arr))
    {
        l = strlen(arr);

        for(i=0; i<l; i++)
        {
            printf("%c", arr[i]);
        }
        printf("\n");

    }
    return 0;
}
