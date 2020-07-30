#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int hour,minute,second;
    string ap;
    char colon;

    cin >> hour >> colon >> minute >> colon >> second >> ap;

    if(ap.compare("PM") == 0) {
        hour = hour + 12;
    }

    cout << hour << ":" << minute << ":" << second;

    return 0;
}