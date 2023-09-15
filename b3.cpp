#include <iostream>
using namespace std;
int UCLN(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}
int main(){
	int m,n;
	cin>>m>>n;
	int i=UCLN(m,n);
	cout<<i;
	return 0;}
