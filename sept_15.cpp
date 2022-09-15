//BALANCE PARENTHESIS PROBLEM      **(doubt)**

#include <bits/stdc++.h>
using namespace std;
void cal_bal(string expr)
{
    int l = expr.length();
    stack<char> stk;
    if ((l % 2) != 0)
    {
        cout << "NOT BALANCED" << endl;
    }
    else
    {
        
        
    }
}
int main()
{

    string expr;
    cout << "Enter expression" << endl;
    cin >> expr;
    cal_bal(expr);

    return 0;
}



//                       POSTFIX CALCULATION
// #include <bits/stdc++.h>
// using namespace std;
// int cal_post(string s)
// {
//     stack<int> stk;
//     int x = 0;
//     int y = 0;
//     int ans = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] != '*' && s[i] != '+' && s[i] != '-' && s[i] != '/' && s[i] != '^')
//         {
//             stk.push(s[i]-'0');
//         }
//         else if (s[i] == '*' && !stk.empty())
//         {
//             x = stk.top();
//             stk.pop();
//             y = stk.top();
//             stk.pop();
//             ans = x * y;
//             stk.push(ans);
//         }
//         else if (s[i] == '+' && !stk.empty())
//         {
//             x = stk.top();
//             stk.pop();
//             y = stk.top();
//             stk.pop();
//             ans = x + y;
//             stk.push(ans);
//         }
//         else if (s[i] == '-' && !stk.empty())
//         {
//             x = stk.top();
//             stk.pop();
//             y = stk.top();
//             stk.pop();
//             ans = x - y;
//             stk.push(ans);
//         }
//         else if (s[i] == '/' && !stk.empty())
//         {
//             x = stk.top();
//             stk.pop();
//             y = stk.top();
//             stk.pop();
//             ans = x / y;
//             stk.push(ans);
//         }
//         else if (s[i] == '^' && !stk.empty())
//         {
//             x = stk.top();
//             stk.pop();
//             y = stk.top();
//             stk.pop();
//             ans = pow(x, y);
//             stk.push(ans);
//         }
//     }
//     return stk.top();
//     stk.pop();
// }
// int main()
// {

//     string s;
//     cin >> s;
//     cout<<cal_post(s)<<endl;

//     return 0;
// }