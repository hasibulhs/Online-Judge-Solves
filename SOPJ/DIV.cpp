#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

#define mx 1000000

int x, c, i, j, divisor[mx + 10];
vector <int> prime_factor[mx + 10];

void fun() // kind of Sieve
{
    for(i = 1; i <= mx; i++)
    {
        for(j = i; j <= mx; j += i) divisor[j]++;
    }

    for(i = 2; i <= mx; i++)
    {
        if(prime_factor[i].size() == 0)
        {
            for(j = i; j <= mx; j += i) prime_factor[j].push_back(i);
        }
    }
}

int main()
{
    fun();

    for(i = 1; i <= mx; i++)
    {
        x = divisor[i];

        if(prime_factor[x].size() == 2 && prime_factor[x][0] * prime_factor[x][1] == x)
        {
            c++;
            if(c % 9 == 0) printf("%d\n", i);
        }
    }

    return 0;
}
