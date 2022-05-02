#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if(n >= 39 && n <= 42) cout << "Senior division" << endl;
    else if(n >= 43 && n <= 46) cout << "Junior division" << endl;
    else cout << "Out of the division" << endl;

    return 0;
}
