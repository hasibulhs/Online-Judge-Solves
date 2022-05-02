#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a == 0) return b;
    if(b == 0) return a;

    if(a < b) swap(a, b);
    return gcd(a % b, b); // without doing the subtraction, we can just go to the point where a will be
    // less than b by doing mod
}

int main()
{
    cout << gcd(105, 30);
    return 0;
}

// Built-in function --> __gcd(11, 3)
