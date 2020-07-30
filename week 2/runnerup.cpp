#include <iostream>

using namespace std;

int addtoarrayandmax(int num,int len) {
    int B[20],j,b_max;

    for(j=0;j<len-1;j++) {
        B[j] = num;
    }

    b_max = B[0];
    for(j=0;j<len-1;j++){
        if(B[j] > b_max) {
            b_max = B[j];
        }
    }
    return b_max;
}

int main() {
    int n,A[20],i;
    int max,res=0;

    cin >> n;
    // Entering elements into an array!
    for(i=0;i<n;i++) {
        cin >> A[i];
    }

    max = A[0];
    for(i=0;i<n;i++) {
        if(A[i] > max) {
            max = A[i];
        }
    }

    for(i=0;i<n;i++) {
        if(A[i] != max) {
            res = addtoarrayandmax(A[i],n);
        } 
    }

    cout << res;

    return 0;
}