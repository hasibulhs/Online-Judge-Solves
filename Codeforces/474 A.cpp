#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char ch1[31] = "qwertyuiopasdfghjkl;zxcvbnm,./", ch2[101], c;
    int flag, l, i, j;

    scanf("%c %s", &c, ch2);

    if(c == 'R') flag = -1;
    else flag = 1;

    l = strlen(ch2);

    for(i=0; i<l; i++)
    {
        for(j=0; j<30; j++)
        {
            if(ch2[i] == ch1[j])
            {
                printf("%c", ch1[j+flag]);
                break;
            }
        }
    }
    return 0;
}
