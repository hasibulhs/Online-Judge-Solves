#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int x, y, i, temp, c, a[100009];

    while(scanf("%d %d", &x, &y) != EOF)
    {
        memset(a, 0, 100009);
        c = 1;

        temp = 0;
        for(i=1; i<=y-1; i++)
        {
            a[(temp + x) % y] = 1;
            temp = (temp + x) % y;
        }

        for(i=1; i<=y-1; i++)
        {
            if(a[i] == 0)
            {
                c = 0;
                break;
            }
        }

        if(c)
            printf("%10d%10d    Good Choice\n\n", x, y);
        else
            printf("%10d%10d    Bad Choice\n\n", x, y);
    }

    return 0;
}
