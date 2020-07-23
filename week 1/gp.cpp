#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
    int n,a,r,i;
    cin >> a;
    cin >> n;
    cin >> r;

    int sum = 0;
    for(i=0;i<n;i++) {
        cout << a*pow(r,i) << " ";
    }
    cout << endl;
    sum = sum + (a*(pow(r,n)-1))/(r-1);

    cout << sum;

    return 0;
}