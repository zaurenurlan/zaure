#include <iostream>
using namespace std;
int main ()
 {
    int a, k, s=0;
    bool b = true;
    cin>>a>>k;
    for (int i = 1; i <= a ; i++) {
        s+=i;
        if (s == k) {
            b = false;
            break;
        }
    }
    if (b == true)
        cout<<"Does not exist";
    else 
        cout<<"Exists";
    return 0;
}
