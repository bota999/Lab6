#include <iostream>
using namespace std;

int ten(int a, int b){
	int c;
	while(a!=0){
		c=a;
		a=b % a;
		b=c;
	}
	return b;
}

int main() {
	int a,b,x;
	cin>>a>>b;
	x=ten(a,b);
	cout<<x;


return 0;
}