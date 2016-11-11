#include <iostream>
using namespace std;
	
	bool Xor(bool x, bool y){
	
	
	return x^y;
	}

int main() {
       	bool x,y,a;
	
	cin>>x>>y;
	a=Xor(x,y);
	cout<<a;


return 0;
}