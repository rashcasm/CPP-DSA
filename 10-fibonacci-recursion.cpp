#include <iostream>
using namespace std;

int fibo(int n)
{
    // base
    if (n==1||n==2)
    {
        return 1;
    }
    // task
    int final = fibo(n-1)+fibo(n-2);
    //recursion call
    return final;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    //     0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
    int nums = fibo(n);
    cout << "The fibo is " << nums << endl;
    return 0;
}
