#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;

int main()
{
    int n, i;
    char s[130];
    stack <char> st;

    scanf("%d", &n);
    getchar();

    while(n--)
    {
        gets(s);

        while(!st.empty()) st.pop();

        for(i=0; i<strlen(s); i++)
        {
            if(s[i] == '(' || s[i] == '[') st.push(s[i]);

            else
            {
                if( s[i] == ')' && ( st.empty() || st.top() != '(' ))
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

        if(st.empty()) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
