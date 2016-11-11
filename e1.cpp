#include <iostream>
#include <cmath>
using namespace std;

bool Prime(int x){
	for(int i=2; i<sqrt(x); i++){
	if(x % i==0) return 0;
	else return 1;
		
}
}

int main() {
        int x;
	cin>>x;
	if(Prime(x)==1) cout<<"prime";
	else cout<<"composite";
	


return 0;
}



