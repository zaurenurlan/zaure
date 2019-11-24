#include <iostream>
using namespace std;
int main () 
{
    int a, b;
    cin>>b;
   while( b > 0) {
        a = b%10;
        b = b/10;
        cout<<a;
   }
    return 0;
}
