#include <iostream>
using namespace std;
int binarysearch(int a[], int n, int left, int right, int k)
{
    while(left<=right)
    {
        int mid = left + (right - left)/2;
        if(a[mid]==k)
        {
            return mid;
        }
        else if (a[mid]>k)
        {
            right = mid - 1;
        }
        else
        {
            left = mid+1;
        }
    }
    return -1;
}
int main()
{
    int a[]={1,2,3,4,5,6,8,9,13,14,15,16,17,19,20};
    int k = 14;
    int n = sizeof(a)/sizeof(a[0]);
    int index = binarysearch(a,n,0,n-1,k);
    if(index==-1)
    {
        cout << "Element not present." << endl;
    }
    else{
        cout << k << " is present on index " << index;
    }
    return 0;
}
