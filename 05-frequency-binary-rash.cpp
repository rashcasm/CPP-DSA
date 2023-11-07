#include <iostream>
using namespace std;
int firstcount(int a[], int n, int l, int r, int k)
{   
    int first = 0;
    while (l<=r)
    {
        int mid = l + (r-l)/2;
        if(a[mid]==k){
            first = mid;
            r=mid-1;
        }
        else if (a[mid]>k){
            r = mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return first;
}

int lastcount(int a[], int n, int l, int r, int k)
{   
    int last = 0;
    while (l<=r)
    {
        int mid = l + (r-l)/2;
        if(a[mid]==k){
            last = mid;
            l=mid+1;
        }
        else if (a[mid]>k){
            r = mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return last;
}

int main() {
    int a[]={1,2,3,4,4,4,4,4,4,5,6};
    int k = 4;
    int n = sizeof(a)/sizeof(a[0]);
    int first = firstcount(a,n,0,n-1,k);
    int last = lastcount(a,n,0,n-1,k);
    int diff = last - first + 1;
    cout << k << " occured " << diff << " times.";
    return 0;
}
