#include<iostream>
using namespace std;

void sort(int *a, int size)
{
    int i=0, j=size-1;
    while(i<j)
    {
        if(a[i]==0)
        {
            i++;
        }
        if(a[j]==1)
        {
            j--;
        }
        if(a[i]==1&&a[j]==0&&i<j)
        {
            swap(a[i], a[j]);
        }
    }
    for(i=0; i<size; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[10]={0,1,1,0,1,0,1,0,0,1};
    int size = 10;
    sort(a, size);
    return 0;
}