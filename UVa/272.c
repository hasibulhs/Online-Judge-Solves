#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000000];
    long int x, i, c=0;

   while( gets(arr))
   {
       x = strlen(arr);

    for(i=0; i<x; i++)
    {
        if(c == 0 && arr[i] == '"')
        {
            printf("``");
            c = 1;
        }

        else if(c == 1 && arr[i] == '"')
        {
            printf("''");
            c = 0;
        }

        else
        {
            printf("%c", arr[i]);
        }
    }
    printf("\n");
   }

    return 0;
}
