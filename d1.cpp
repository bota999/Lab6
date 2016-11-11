#include <iostream>
#include <string>

using namespace std;

bool Election(bool x, bool y, bool z){
	cin>>x>>y>>z;
	if(x+y+z>=2) return 1;
	else return 0;
	
}
int main() {
        bool a,b,c,d;
	d=Election(a,b,c);
	cout<<d;


return 0;
}