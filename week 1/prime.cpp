#include <iostream>
#include <string>

using namespace std;

void prime(int &num1, int &num2) {
    int i,j,count = 0,temp;
    for(i=num1;i<=num2;i++) {
        count = 0;
        for(j=1;j<=i;j++) {
            if(i % j == 0) {
                count = count + 1;
            }
        } 
        if(count == 2) {
            temp = i;
            cout << temp << " ";
        }
    }
    
}

int main() {
    int n1,n2,i,res;

    cin >> n1;
    cin >> n2;
    
    prime(n1,n2);
    
    return 0;
}