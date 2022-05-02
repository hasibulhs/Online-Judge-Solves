#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n, a[999];
    cin >> t;

    while(t--)
    {
        int arr[99999] = {0};

        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            arr[a[i]]++;
        }

        for(int i = 1; i <= n; i++)
        {
            if(arr[a[i]] == 1)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
