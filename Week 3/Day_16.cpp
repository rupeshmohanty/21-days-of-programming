#include <iostream>
#include <string>
#define no_of_chars 256

using namespace std;

int main() {
    string str;
    int count[no_of_chars] = {0},ascii;
    cin >> str;
    int i,j,first = 0,second = 0;

    for(i=0;str[i];i++) {
        (count[str[i]])++;
    }

    for(i=0;i<no_of_chars;i++) {
        if (count[i] > count[first])
        {
            second = first;
            first = i;
        }else if(count[i] > count[second] &&
                count[i] != count[first]){
            second = i;
        }

    }
    ascii = (int)second;
    cout << ascii;
    return 0;
}
