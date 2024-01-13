#include<iostream>
using namespace std;

void search(int *a, int s)
{
    int flag = 0;
    for(int i=0;i<8;i++)
    {
        if(s==a[i])
        {
            cout << s << " is present at index " << i << endl;
            flag = 1;
        }
    }
    if(flag!=1)
    {
        cout << s << " is not present in the array " <<endl;
    }
}
int main()
{
    int s;
    int a[8]={1,2,3,5,6,7,8,9};
    cout << endl;
    cout << "Which number to search? : ";
    cin >> s;
    cout << endl;
    search(a, s);
    cout << endl;
    return 0;
}