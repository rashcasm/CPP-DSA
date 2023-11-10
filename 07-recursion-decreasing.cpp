// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printrecur(int n)
{
    // base
    if (n==0)
    {
        return;
    }
    
    // task
    cout << n << " ";
    
    // recursion
    printrecur(n-1);
}

int main() {
    cout << "Rashmin" << endl;
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    printrecur(n);
    return 0;
}
