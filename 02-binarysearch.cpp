#include <iostream>
using namespace std;
int binarysearch(int a[], int n, int l, int r, int k)
{   
    int save = -1;
    while (l<=r)
    {
        int mid = l + (r-l)/2;
        if(a[mid]==k){
//            return mid; 
            save = mid;
            r=mid-1;
        }
        else if (a[mid]>k){
            r = mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return save;
}
int main() {
    int a[]={2,3,4,4,4,5,6,2,3,4};
    int k = 4;
    int n=sizeof(a)/sizeof(a[0]);
    int index = binarysearch(a,n,0,n-1,k);
    cout << "First occurance of " << k << " is " << index << endl;
    return 0;
}
