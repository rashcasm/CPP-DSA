#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    int a[5] = {1,2,3,4,5};
    stack<int> s;
    queue<int> q;
    for(int i=0;i<5;i++)
    {
        q.push(a[i]);
    }
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while(!q.empty())
    {
        cout<< q.front() << " ";
        q.pop();
    }
    return 0;
}
