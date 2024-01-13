#include<iostream>
using namespace std;

int focc(int *a, int size, int key) {
    int s = 0;
    int e = size-1;
    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e) {
        if(a[mid]==key) {
            ans = mid;
            e = mid-1;
        }
        else if (a[mid] > key) {
            e = mid-1;
        }
        else if (a[mid] < key) {
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int locc(int *a, int size, int key) {
    int s = 0;
    int e = size-1;
    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e) {
        if(a[mid]==key) {
            ans = mid;
            s = mid+1;
        }
        else if (a[mid] > key) {
            e = mid-1;
        }
        else if (a[mid] < key) {
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int main()
{
    int a[9]={1,2,3,3,3,4,5,6,7};
    cout << "First occ is " << focc(a, 9, 3) << endl;
    cout << "and last occ is " << locc(a,9,3) << endl;
    return 0;
}