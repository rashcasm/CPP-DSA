#include<iostream>
using namespace std;

void sort(int *a, int size)
{
    int i=0, j=0, k=size-1;
    while(j<k)
    {
        if(a[j]==0)
        {
            swap(a[i], a[j]);
            i++;
            j++;
        }
        else if (a[j]==1)
        {
            j++;
        }
        else
        {
            swap(a[j], a[k]);
            k--;
        }
    }
    for(i=0;i<size;i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[10]={0,1,2,0,2,0,1,0,2,1};
    int size = 10;
    sort(a, size);
    return 0;
}