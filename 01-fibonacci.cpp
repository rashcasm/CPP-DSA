#include <iostream>
using namespace std;
int main() {
    int i, n1, n2, n3, num;
    cout << "Enter number: " <<endl;
    cin >> num;
    n1=0;
    n2=1;
    cout << "0 1 ";
    for (i=2; i<num; i++){
        n3=n1+n2;
        cout << n3 << " ";
        n1=n2;
        n2=n3;
    }
    return 0;
}
