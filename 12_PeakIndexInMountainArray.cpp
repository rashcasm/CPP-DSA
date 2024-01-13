#include<iostream>
using namespace std;

int peakIndexInMountainArray(int *arr, int size) {
        int s=0, e=size-1;
        int mid = s + (e-s)/2;
        while (s<e){
            if(arr[mid]<arr[mid+1]) {
                s=mid+1;
            }
            else {
                e=mid;
            }
            mid = s + (e-s)/2;
        }
        return mid;
}

int main()
{
    int a[10]={0,3,5,8,99,18,15,14,3,1};
    cout << "The index of peak is " << peakIndexInMountainArray(a, 10) << endl;
    return 0;
}