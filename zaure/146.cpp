#include <iostream>
using namespace std;
int main()
 {
    int a = 0;
    for (char i = 'a'; i <= 'z'; i++) {
        if (a%5 == 0 && a != 0) 
        	cout<<endl;
	cout<<char(i-32)<<i<<' ';
        a++;
    }
    return 0;
}
