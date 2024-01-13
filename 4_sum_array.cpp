#include<iostream>
using namespace std;

int soe(int *a)
{
    int sum=0;
    for(int i=0; i<5; i++)
    {
        sum = sum+a[i];
    }
    return sum;
}

int main()
{
    int a[5]={1,2,3,-2,-1};
    int sum_of_elements = soe(a);
    cout<<endl;
    cout << "the sum of elements is " << sum_of_elements << endl << endl;
}