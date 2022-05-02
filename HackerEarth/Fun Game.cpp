#include<iostream>
#include<queue>
using namespace std;
int arr[1000005];

int main()
{
    int n, i;
    queue <int> q;

    cin >> n;
    for(i = 0; i < n; i++) cin >> arr[i];
    int c = 0, c1 = 0, c2 = n - 1;

    while(c1 < n && c2 >= 0)
    {
        c++;

        if(arr[c1] > arr[c2])
        {
            q.push(1);
            c2--;
        }

        else if(arr[c1] < arr[c2])
        {
            q.push(2);
            c1++;
        }

        else
        {
            q.push(0);
            c1++;
            c2--;
        }
    }

    for(i = 1; i <= c; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
