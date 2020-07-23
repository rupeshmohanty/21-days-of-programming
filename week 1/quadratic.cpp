#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
    float a,b,c,D;
    
    cin >> a >> b >> c;
    D = pow(b,2) - (4*a*c);

    float root1, root2;
    if(D > 0) {
        root1 = (-b+sqrt(D))/(2*a);
        root2 = (-b-sqrt(D))/(2*a);
        cout << root1 << root2;
    } else if(D == 0) {
        root1 = -b/(2*a);
        root2 = -b/(2*a);
        cout << root1 << root2;
    } else {
        cout << -b/(2*a) << " + i" << sqrt(abs(D))/(2*a)<<endl;
        cout << -b/(2*a) << " - i" << sqrt(abs(D))/(2*a);    
    }

    return 0;
}