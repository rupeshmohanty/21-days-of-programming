#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
    int a[8],i,j,k=0,sum=0,temp;

    for(i=0;i<8;i++) {
        cin >> temp;
        a[i] = temp;
    }

    for(j=7;j>=0;j--){
        sum = sum + a[j]*pow(2,k);
        k++;
    }

    cout << char(sum);

    return 0;
}