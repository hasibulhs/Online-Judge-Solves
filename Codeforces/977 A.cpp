#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;

    cin >> a >> b;
    while(b--)
    {
        if(a % 10 != 0) a -= 1;

        else a /= 10;
    }

    cout << a << endl;
    return 0;
}
