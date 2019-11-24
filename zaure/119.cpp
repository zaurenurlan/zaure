#include <iostream>
using namespace std;
int main () 
{
    int a, b, c, d, e;
    for(int i = 1000; i <= 9999; i++) {
        a =  i / 1000;
        b = (i / 100 ) % 10;
        c = (i / 10) % 10;
        d= i % 10;
        e = a+b+c+d;
        if(e == 15)
            cout<<i<<endl;
    }
    return 0;
}
