#include <iostream>

using namespace std;

int main() {
        int n;
	cin>>n;
	bool ok=true;
	int x=1;
	int i=0;
	while(ok){
		if(x>=n) ok=false;
		x=x*2;
		i++;
	}
	cout<<--i;
	return 0;



return 0;
}




