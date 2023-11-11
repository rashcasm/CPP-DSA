#include <iostream>
#include <stack>
using namespace std;

int main() {
    int a[5] = {9,3,5,6,2};
    stack<int> s1;
    stack<int> s2;
    for(int i=0;i<5;i++)
    {
        s1.push(a[i]);
    }
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    if(s1.empty())
    {
    while(!s2.empty())
    {
        cout<<s2.top()<< " ";
        s2.pop();
    }
    }
    return 0;
}
