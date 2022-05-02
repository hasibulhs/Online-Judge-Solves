#include<cstdio>
#include<iostream>
#include<vector>
#define MAX 32005 // sqrt(10 ^ 9)
#define ll long long // using ll as long long;
using namespace std;

bool isPrime[MAX]; // all values = false

int main()
{
    vector <int> prime;
    int i, j;

    for(i = 3; i * i <= MAX; i += 2) // i <= sqrt(n)
    {
        if(!isPrime[i]) // prime
        {
            for(j = i * i; j <= MAX; j += i) isPrime[j] = true; // not prime
        }
    }

    prime.push_back(2);
    for(i = 3; i < MAX ; i += 2)
    {
        if(!isPrime[i]) prime.push_back(i);
    }

    for(i = 0; i < 10; i++) printf("%d\n", prime[i]);
    return 0;
}
