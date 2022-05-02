#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, temp, sum = 0;

    cin >> a >> b;
    temp = a + b;


    if(a % 2 == 0)
    {
        cout << a << " is even" << endl;
        sum += a;
    }
    else
    {
        cout << a << " is odd" << endl;
        sum -= a;
    }


    if(b > 0)
    {
        cout << b << " is greater than zero" << endl;
        sum += b;
    }
    else if(b < 0)
    {
        cout << b << " is less than zero" << endl;
        sum -= b;
    }
    else
    {
        cout << b << " is equal to zero" << endl;
        sum *= b;
    }


    cout << "after adding,a+b is equal to " << temp << endl;


    if(temp % 2 == 0)
    {
        sum = sum + a + b;
        cout << "after adding " << a << " " << b << " sum is equal to " << sum << endl;
    }
    else
    {
        sum = sum - a - b;
        cout << "after removing " << a << " " << b << " sum is equal to " << sum << endl;
    }


    if(temp == 0)
    {
        sum *= 10;
        cout << "the result after multiplying sum = " << sum << endl;
    }


    sum *= 5;
    cout << "THE ULTIMATE RESULT = " << sum << endl;


    cout << "I wanna be a national contestant and I can write long code" << endl;

    return 0;
}
