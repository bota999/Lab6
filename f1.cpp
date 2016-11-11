#include <iostream>
#include <cmath>
using namespace std;
	
	double power(double a, int n){
	
	double s=1;
	for(int i=0; i<abs(n); i++) 
	if(n<0) s*=1/a;
	else s*=a;
	
	return s;
	}

int main() {
       	double a,x;
	int n;
	cin>>a>>n;
	x=power(a,n);
	cout<<x;


return 0;
}