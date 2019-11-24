#include <iostream>
using namespace std;
int main () 
{
    int a, b;
    int c = 0;
    cin>>a>>b;
   for (int i = a; i <= b; i++){
       if (i%12 == 0)
       c++;
     }
     cout<<c;
return 0;
}

