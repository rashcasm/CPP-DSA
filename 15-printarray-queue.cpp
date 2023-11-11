
#include <iostream>
#include <queue>
using namespace std;
int main() {
    int a[5] = {6,9,4,3,5};
    queue<int> q;
    for(int i=0;i<5;i++)
    {
        q.push(a[i]);
    }
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
