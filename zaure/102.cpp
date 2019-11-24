#include <iostream>
using namespace std;
int main () {
    int a, b, c, d;
    for(int i = 100; i < 999; i++) {
        a =  i / 100;
        b = (i / 10 ) % 10;
        c = i % 10;
        d=a*a*a+b*b*b+c*c*c;
        if (i==d) {
            cout<<i<<endl;
        }
    }
    return 0;
}
