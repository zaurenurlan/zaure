#include <iostream>
using namespace std;
int main () 
{
    int a, b;
    cin>>a;
    b = a%10;
    a = a/10;
   while(a > 0) {
        if (a %10 > b)
        b = a%10;
        a = a/10;
   }
   cout<<b<<endl;
    return 0;
}
