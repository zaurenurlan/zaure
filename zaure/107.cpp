#include <iostream>
using namespace std;
int main ()
 {
    int a;
    for(int i = 10; i > 0; i--)
    {
        int j = i;
        a += i*j;
        while (j--){
            cout<<i<<' ';
        }
        cout<<endl;
    }
    cout<<a;
    return 0;
}
