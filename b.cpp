#include <iostream>
#include <cmath> 

using namespace std;
int main() {
        int n;
	cin>>n;
	int i=1;
	while(i<=n){
	   i++;
	if(n % i==0){
		cout<<i;
	i=n;
	}
	}	


return 0;
}