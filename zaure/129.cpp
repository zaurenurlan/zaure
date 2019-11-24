#include <iostream>
using namespace std;
int main () 
{
    int n, a;
    cin>>n;
    for(int i = 1; i <= n; i++){
        a = 0;
        for(int j = 1; j < i/2 + 1; j++){
            if(i % j == 0)
                a+=j;
        }
        if(a == i)
            cout<<i<<endl;
    }
 return 0;
}
