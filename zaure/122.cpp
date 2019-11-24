#include <iostream>
using namespace std;
int main ()
 {
    int a, b;
    int c = 0;
    cin>>b;
   while(b > 0) {
        a = b%10;
        b = b/10;
        if (a > 3 && a < 8)
        c++;
   }
   cout<<c<<endl;
    return 0;
}
