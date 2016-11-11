#include <iostream>
using namespace std;
int main() {
        int n;
	cin>>n;
	int a=0, b=1, i=1, d=1;
	
	if(n==0) d=0;

	while(++i<=n){ 
	d=a+b;
	a=b;
	b=d;
	
	}
	cout<<d;


return 0;
}