#include<iostream>
using namespace std;
int binarysearch(int *a, int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2; //chalaki moment for biggggg integers
    while (start<=end)
    {
        if(a[mid] == key) {
            return mid;
        }
        if (key > a[mid]) {
            start=mid+1;
        }
        else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }    
    return -1;
}
int main()
{
    int even[8]={3,6,9,18,27,36,45,54};
    int odd[9]={9,18,27,36,45,54,63,72,81};
    cout << "index of 36 is " << binarysearch(even, 8, 36) << endl;
    cout << "index of 72 is " << binarysearch(odd, 9, 72) << endl;
    return 0;
}