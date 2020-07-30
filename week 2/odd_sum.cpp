#include <iostream>

using namespace std;

int oddfactors(int fact,int s) {
    if(fact % 2 != 0) {
        s = s + fact;
    }

    return s;
}

int main() {
    int num,i,res=0,sum=0;

    cin >> num;
    for(i=1;i<=num;i++) {
        if(num % i == 0) {
            res = res + oddfactors(i,sum);           
        }
    }

    cout << res;
    return 0;
}