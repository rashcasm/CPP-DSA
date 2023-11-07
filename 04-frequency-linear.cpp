#include <iostream>
using namespace std;
int countfreq(int a[], int n, int k)
{
    int count=0;
    for (int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            count++;
        }
    }
    return count;
}
int main() {
    int a[]={1,2,3,4,4,4,5,6,5,3,2,4,4};
    int k = 4;
    int n = sizeof(a)/sizeof(a[0]);
    int freq = countfreq(a,n,k);
    cout << k << " occured " << freq << " times.";
    return 0;
}
