#include<iostream>
using namespace std;

/*
int gcd(int a, int b)
{
    if (a == 0 || b == 0) return 0;
    else if (a == b) return a;
    else if (a > b) return gcd(a - b, b);
    else return gcd(a, b - a);
}
*/

int gcd(int a, int b) // Euclid's Algorithm, complexity = log(n)
{
    if(a == 0) return b;
    if(b == 0) return a;

    if(a < b) swap(a, b);
    return gcd(a - b, b);
}

int main()
{
    cout << gcd(105, 30);
    return 0;
}

// Built-in function --> __gcd(11, 3)
