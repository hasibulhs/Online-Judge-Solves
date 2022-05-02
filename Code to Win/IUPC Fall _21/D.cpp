#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    double a, b, r, area1, area2, area;

    cin >> t;
    while(t--)
    {
        cin >> a >> b;

        r = (a * b) / (a + b);
        area1 = (2 * acos(0.0)) * r * r;

        area2 = ((a + b) / 2) * (2 * r);
        area = area2 - area1;

        printf("%0.6f\n", area);
    }

    return 0;
}
