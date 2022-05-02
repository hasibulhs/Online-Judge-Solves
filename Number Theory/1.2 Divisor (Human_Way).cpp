#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector <int> divs;

    cout << "Input: ";
    cin >> n;
    for(int i = 1; i * i <= n; i++) // sqrt(n)
    {
        if(n % i == 0)
        {
            divs.push_back(i);
            if(i != n / i) divs.push_back(n / i);
        }
    }

    sort(divs.begin(), divs.end());
    for(auto i: divs) cout << i << " ";
    //cout << divs.size() << endl;
    //cout << divs[8];

    return 0;
}
