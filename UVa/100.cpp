#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n1, n2, i, count, temp, num;

    while(scanf("%d %d", &n1, &n2) != EOF)
    {
        count = 0;
        printf("%d %d ", n1, n2);

        if(n1 > n2) swap(n1, n2);

        for(i=n1; i<=n2; i++)
        {
            temp = 1;
            num = i;

            while(num != 1)
            {
                if(num % 2 == 0) num = num / 2;
                else num = (num * 3) + 1;
                temp++;
            }

            if(temp > count) count = temp;
        }
        printf("%d\n", count);
    }

    return 0;
}
