#include<stdio.h>
#include<string.h>
int main()
{
    char aSum[999], aNew[100];
    int i, r, l, l2 = 1, num1, num2;
    memset(aSum,'0',999);

    while(gets(aNew))
    {
        if(!strcmp(aNew,"0")) break;

        strrev(aNew);
        l = strlen(aNew);
        r = 0;

        for(i=0; i<l; i++)
        {
            num1 = aSum[i] - '0';
            num2 = aNew[i] - '0';

            aSum[i] =  ((num1 + num2 + r) % 10) + '0';
            r = (num1 + num2 + r) / 10;
        }

        while(r > 0)
        {
            num1 = aSum[i] - '0';
            aSum[i] = ((num1 + r) % 10) + '0';
            r = (num1 + r) / 10;
            i++;
        }

        if(i > l2) l2 = i;
    }

    for(i=l2-1; i>=0; i--) printf("%c", aSum[i]);
    printf("\n");
    return 0;
}
