#include <iostream>
#include <string>

using namespace std;

int main() {
    int num,i,j,temp,count[10]={0,0,0,0,0,0,0,0,0,0};

    cin >> num;

    for(i=0;i<=9;i++) {
        j = num;
        while(j > 0) {
            temp = j % 10;
            if(temp == i) {
                count[i] = count[i] + 1;
            }
            j = j/10;
        }
        cout << "The frequency of " << i << " is " << count[i] << endl;
    }

    
    return 0;
}