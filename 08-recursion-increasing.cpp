// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printinc(int current, int n)
{
    // base
    if (current==n+1)
    {
        return;
    }
    
    // task
    cout << current << " ";
    
    // recursion
    printinc(current+1, n);
}

int main() {
    int n=9;
    int current=1;
    printinc(current, n);
    return 0;
}
