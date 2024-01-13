#include<iostream>
using namespace std;

void reverse(int *a, int size)
{
    int start = 0;
    int end = size-1;
    while(start<=end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}
void printarray(int *a, int size)
{
    for (int i=0; i<size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[6] = {1,2,3,4,5,6};
    int b[5] = {11,12,13,14,15};
    cout << endl;
    reverse(a, 6);
    printarray(a, 6);
    cout << endl;
    reverse(b, 5);
    printarray(b, 5);    
    cout << endl;
    return 0;
}