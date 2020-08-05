#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num[10];
    int i;
    int esum = 0,osum = 0;

   for(i=0;i<sizeof(num)/sizeof(int);i++) {
       cin >> num[i];
   }
   
    for(i=0;i<sizeof(num)/sizeof(int);i++) {
        if(i % 2 == 0) {
            esum = esum + num[i];
        } else {
            osum = osum + num[i];
        }
    }

    int diff = esum - osum;
    if(diff == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}