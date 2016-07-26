#include <iostream>
using namespace std;

int main(){
	int *p1,**p2,m=5,n=10;
	p1 = &m;
	p2 = &p1;
	cout << **p2 << endl;
	p1 = &n;
	//p2 = p1;
	cout << **p2 << endl;
}