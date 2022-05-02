#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, i;
    string s;
    stack <char> st;

    cin >> n;
    while(n--)
    {
        cin >> s;
        while(!st.empty()) st.pop();

        for(i = 0; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);

            else
            {
                if( s[i] == ')' && ( st.empty() || st.top() != '(' ))
                {
                    st.push('x');
                    break;
                }

                if( s[i] == '}' && ( st.empty() || st.top() != '{' ))
                {
                    st.push('x');
                    break;
                }

                if( s[i] == ']' && ( st.empty() || st.top() != '[' ))
                {
                    st.push('x');
                    break;
                }

                st.pop();
            }
        }

        if(st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
