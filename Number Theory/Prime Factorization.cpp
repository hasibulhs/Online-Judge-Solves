#include<iostream>
#include<cstring>
#include<vector>
#include<cmath>
using namespace std;

vector <int> prime;
int i, j, listSize, list_a[999999];

void sieve(int n)
{
    bool isPrime[n + 1];
    memset(isPrime, false, sizeof(isPrime));

    for(i = 3; i * i <= n; i += 2)
    {
        if(!isPrime[i])
        {
            for(j = i * i; j <= n + 1; j += i) isPrime[j] = true;
        }
    }

    prime.push_back(2);
    for(i = 3; i <= n; i += 2)
    {
        if(!isPrime[i]) prime.push_back(i);
    }
}

void primeFactorize(int n)
{
    listSize = 0;
    sieve(ceil(sqrt(n)));

    for(i = 0; prime[i] * prime[i] <= n; i++)
    {
        if(n % prime[i] == 0)
        {
            while(n % prime[i] == 0)
            {
                n /= prime[i];
                list_a[listSize] = prime[i];
                listSize++;
            }
        }
    }

    if(n > 1)
    {
        list_a[listSize] = n;
        listSize++;
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    primeFactorize(36);
    for(i = 0; i < listSize; i++) cout << list_a[i] << " ";

    return 0;
}
