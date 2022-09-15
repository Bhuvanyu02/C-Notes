// INFIX TO POST-FIX

#include <bits/stdc++.h>
using namespace std;
int priority(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    if (ch == '/' || ch == '*')
    {
        return 2;
    }
    if (ch == '^')
    {
        return 3;
    }
    return 0;
}
string convert(string s)
{
    string postfix = "";
    int i = 0;
    stack<int> st;
    while (s[i] != NULL)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            postfix += s[i];
            i++;
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
            i++;
        }
        else if (s[i] == ')')
        {

            while (st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            st.pop();
            // i++;
        }
        else
        {
            while (!st.empty() && priority(s[i]) <= priority(st.top()))
            {
                postfix += st.top();
                st.pop();
            }
            st.push(s[i]);
            i++;
        }
    }
    while (!st.empty())
    {
        postfix+=st.top();
        st.pop();
    }
    return postfix;
}
int main()
{
    string s;
    cout << "Enter String" << endl;
    cin >> s;
    string postfix;
    postfix = convert(s);
    cout << "Postfix : " << postfix << endl;
    return 0;
}
