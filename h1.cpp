#include <iostream>
using namespace std;

int phi(int n){
	int a=0, b=1, i=0, d=1;
	
	if(n==0) d=0;

	while(i<n){ 
	d=a+b;
	a=b;
	b=d;
	i++;
}
	return d;
}
int main() {
        int n,q;
	cin>>n;
	q=phi(n);
	cout<<q;

return 0;
}