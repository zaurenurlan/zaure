#include <iostream>
using namespace std;
int main () 
{
    int n;
    cin>>n;
    int a[n];
    a[0]=1;
    a[1]=1;
    for(int i = 2; i <= n; i++)
    {
        a[i] = a[i-1]+a[i-2];
    }
    if(n == 0)
    cout<<0;
    else cout<<a[n-1];
    return 0;
}
