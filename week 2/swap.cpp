#include <iostream>

using namespace std;

int main() {
    int n,A[20],i,temp;

    cin >> n;

    for(i=0;i<n;i++) {
        cin >> A[i];
    }

    temp = A[n-1];
    A[n-1] = A[0];
    A[0] = temp;
    
    for(i=0;i<n;i++) {
        cout << A[i] << " ";
    }
    
}