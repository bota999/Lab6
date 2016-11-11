#include <iostream>

using namespace std;
int main() {
        bool ok=true;
	double x,y,n;
	int i=1;
	cin>>x>>y;
	
	while(ok){
		if(x>=y) ok=false;
		x=x+0.1*x;
		i++;
	}
	cout<<--i;



return 0;
}
