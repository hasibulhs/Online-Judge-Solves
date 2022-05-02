#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int l, r, c;
    cin >> l >> r;
    c = 0;

    for(int i = l; i <= r; i++)
    {
        if(i % 2 != 0) c++;
    }

    cout << c << endl;
    return 0;
}

