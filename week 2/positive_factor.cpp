#include <iostream>

using namespace std;

int largest(int temp){
    int j,count = 0,max = 0,prime;

    for(j=1;j<=temp;j++) {
        if(temp % j == 0) {
            count = count + 1;
        }
    }

    if(count == 2) {
        prime = temp;
    }

    if(prime > max) {
        max = prime;
    }

    return max;
}

int main() {
    int n,i,res,factor[10];

    cin >> n;

    for(i=1;i<=n;i++) {
        if(n % i == 0) {
            factor[i-1] = i; 
        }
    }

    int len = sizeof(factor)/sizeof(factor[0]);
    for(i=0;i<len;i++) {
        res = largest(factor[i]);
    }

    cout << res;
    return 0;
}