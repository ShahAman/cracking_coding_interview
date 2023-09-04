#include <iostream>
#include <string>
#include <stack>

using namespace std;

//Time Complexity: O(n)
//Space Complexity: O(n)
string removeDuplicates(string s)
{
    stack<char> st;

    for(char c : s)
    {
        if(!st.empty() && st.top() == c)
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    string result = "";
    while(!st.empty())
    {
        result = st.top() + result;
        st.pop();
    }

    return result;
}