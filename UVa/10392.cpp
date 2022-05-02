#include<iostream>
#include<vector>
using namespace std;

vector <long long int> prime;
long long int i, j;
bool isPrime[10000007];

void sieve(long long int n)
{
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

void primeFactorize(long long int n)
{
    for(i = 0; prime[i] * prime[i] <= n; i++)
    {
        if(n % prime[i] == 0)
        {
            while(n % prime[i] == 0)
            {
                n /= prime[i];
                cout << "    " << prime[i] << endl;
            }
        }
    }

    if(n > 1) cout << "    " << n << endl;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve(10000007);
    long long int n;

    while(cin >> n && n >= 0)
    {
        primeFactorize(n);
        cout << endl;
    }

    return 0;
}
