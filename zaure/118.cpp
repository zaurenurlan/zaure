#include <iostream>
using namespace std;
int main () 
{
    int a;
    int b = 0;
    while(a != 0)
    {
        cin>>a;
        if(a%2 == 0 && a != 0)
        b++;
    }
    cout<<b;
    return 0;
}
