#include <iostream>
using namespace std;

int main(){
	int *p, ano[]={1982,1947,2007};
	p = ano;
	p++;
	cout << *p << endl;
	(*p)++;
	cout << *p << endl;
}