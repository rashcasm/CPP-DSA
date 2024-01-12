#include <iostream>
using namespace std;
void sort(int *a)
{
    int count0=0, count1=0;
    int i;
    for(i=0;i<6;i++)
    {
        if(a[i]==0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
    for(i=0; i<count0; i++)
    {
        a[i]=0;
    }
    for(i=count0; i<6; i++)
    {
        a[i]=1;
    }
    for(i=0;i<6;i++)
    {
        cout << a[i] << " ";
    }
}
int main() {
    int a[6]={0,0,0,1,0,1};
    sort(a);
    return 0;
}
