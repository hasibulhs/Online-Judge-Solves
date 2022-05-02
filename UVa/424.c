#include<stdio.h>
#include<string.h>

int main()
{
    char aSum[999], aNew[100];
    int i, j, len1, len2 = 1, x, y, r;
    memset(aSum,'0',999);

    while(gets(aNew))
    {
        if(!strcmp(aNew,"0")) break;

        len1 = strlen(aNew);
        r = 0;

        for(i=len1-1,j=0; i>=0; i--,j++)
        {
            x = aNew[i] - '0';printf("x: %d\n", x);
            y = aSum[j] - '0';printf("y: %d\n", y);

            aSum[j] = ((x + y + r) % 10) + '0';
            r = (x + y + r) / 10;
        }

        while(r > 0)
        {
            x = aSum[j] - '0';
            aSum[j] = ((x + r) % 10) + '0';
            r = (x + r) / 10;
            j++;
        }

        if(j > len2) len2 = j;
    }
    for(i=len2-1; i>=0; i--) printf("%c", aSum[i]);
    printf("\n");
    return 0;
}
