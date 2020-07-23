#include <iostream>
#include <string>

using namespace std;

int main() {
    string message;
    int i,j,temp,ascii = 0;
    getline(cin,message);

    for(i=0;i<message.length();i++) {
        if(message[i] == ' ') {
            temp = i;
            break;
        } else {
            ascii = (int)message[i];
            if(i % 2 == 0) {
                ascii = ascii - 1;
            } else {
                ascii = ascii + 1;
            }
        }
        message[i] = (char)ascii;
    }

    for(j=temp+1;j<message.length();j++) {
        ascii = (int)message[j];
        if(j % 2 == 0) {
            ascii = ascii + 1;
        } else {
            ascii = ascii - 1;
        }
        message[j] = (char)ascii;
    }
    cout << message;

    return 0;
}
