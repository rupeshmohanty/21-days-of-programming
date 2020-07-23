#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char str1[20];

    int i,len,flag=0;
    gets(str1);

    len = strlen(str1);
    for(i=0;i<len;i++) {
        if(str1[i] != str1[len-i-1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) {
        cout << "No";
    } else {
        cout << "Yes";
    }

    return 0;
}