#include <iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6};
    int size = sizeof(a)/sizeof(a[0]);
    int temp;
    for(int i=0;i+1<size; i=i+2)
    {
        temp = a[i+1];
        a[i+1]=a[i];
        a[i]=temp;
    }
    for(int i=0;i<size;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
