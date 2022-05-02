#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int n, m, temp, flag;
    cin >> n >> m;

    vector< long long int > v;
    vector< long long int > ans;

    for(long long int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    for(long long int i = 0; i < m; i++)
    {
        flag = 0;
        cin >> temp;

        for(long long int j = 0; j < n; j++)
        {
            if(temp <= v[j])
            {
                ans.push_back(j + 1);
                v[j] = v[j] - temp;
                flag = 1;
                break;
            }
        }

        if(flag == 0) ans.push_back(0);
    }

    for(long long int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}
