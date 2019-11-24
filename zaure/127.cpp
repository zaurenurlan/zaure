#include <iostream>
using namespace std;
int main() 
{
    int n;
    int a = 0;
    cin>>n;
    for(int i = 2; i <= n/2; i++) {
        if(n%i == 0) {
            cout<<"Not a prime number"<<endl;
            a = 1;
            break;
        }
    }
    if (a == 0)
        cout<<"Prime number"<<endl;
    return 0;
}
