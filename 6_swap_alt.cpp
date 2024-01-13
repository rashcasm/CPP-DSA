#include<iostream>
using namespace std;

void swap_alt(int *a, int size)
{
    int s=0;
    int e=1;
    while(e<size)
    {
        swap(a[s], a[e]);
        s=s+2;
        e=e+2;
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
    printarray(a, 6);
    swap_alt(a, 6);
    printarray(a, 6);
    cout << endl;
    printarray(b, 5); 
    swap_alt(b, 5);
    printarray(b, 5);    
    cout << endl;
    return 0;
}