#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    int n, temp1 = 1, temp2 = 1, i;

    scanf("%d", &n);
    for(i=1 ;; i++)
    {
        if(temp2 > n)
        {
            if(temp2 % n == 0)
            {
                printf("%d\n", i);
                break;
            }

            else
            {
                temp1 = temp1 * 10;
                temp2 = temp1 + (temp2 % n);
            }
        }

        else
        {
            temp1 = temp1 * 10;
            temp2 = temp1 + 1;
        }
    }

    return 0;
}
