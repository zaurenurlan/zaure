#include <iostream>
using namespace std;
int main ()
 {
    int a,b,c,d,e,k;
    for(int i = 1000; i < 9999; i++) {
        a =  i / 1000;
        b = (i / 100 ) % 10;
        c = (i / 10) % 10;
        d= i % 10;
        e = a+b+c+d;
        if (i==600*e)
        k++;
    }
    cout<<k<<endl;
    return 0;
}
