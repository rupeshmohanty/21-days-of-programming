#include <iostream>  
using namespace std;  
int main()  
{  
 char ch='A';    
    int i, j, k, m, n;
    cin >> n;    
    for(i=1;i<=n;i++)    
    {    
        for(j=n;j>=i;j--)    
            cout<<" ";    
        for(k=1;k<=i;k++)    
            cout<<ch++;    
            ch--;    
        for(m=1;m<i;m++)    
            cout<<--ch;    
        cout<<"\n";    
        ch='A';    
    }    
return 0;  
}  