#include <iostream>
#include <string>

using namespace std;

int main() {
	bool ok=true;
        int n;
	int s=1;
	cin>>n;

	while(ok){
	
	cout<<s<<" ";
	if(n-s<s) ok=false;
	s*=2;
	}
	
	
		

return 0;
}