#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s = "abbaca";
    stack<char> stack1;
    for(char c : s)
    {
        if(!stack1.empty() && stack1.top()==c)
        {
            stack1.pop();
        }
        else
        {
            stack1.push(c);
        }
    }
    
    stack<char> stack2;
    string ans = "";
    
    while(!stack1.empty())
    {
        char c=stack1.top();
        stack1.pop();
        stack2.push(c);
    }
    while(!stack2.empty())
    {
        ans+=stack2.top();
        stack2.pop();
    }
    cout << ans;
    return 0;
}
