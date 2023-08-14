#include <bits/stdc++.h>

using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(n)
bool isValid(string s)
{
    stack<char> st;
    unordered_map<char, char> bracket_map = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char c : s)
    {
        if (bracket_map.find(c) != bracket_map.end())
        {
            if (st.empty() || st.top() != bracket_map[c])
            {
                return false;
            }
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    return st.empty();
}

int main()
{
    string s;
    cin >> s;
    if (isValid(s))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}