#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int d,rev=0;
    stack<int> st;
    int num = 1234;
    while(num!=0)
    {
        d=num%10;
        st.push(d);
        num=num/10;
    }
    int place=1;
    while(!st.empty())
    {
        int digit = st.top();
        st.pop();
        rev = rev+digit*place;
        place=place*10;
    }
    cout << rev;
    return 0;
}
