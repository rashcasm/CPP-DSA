#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st;
    string s="rashmin";
    string o=s;
    for(char c: s)
    {
        st.push(c);
    }
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        s[i]=st.top();
        st.pop();
    }
    cout << "The reverse of " << o << " is " << s;
    
    return 0;
}
