#include <iostream>
#include <cmath>

using namespace std;
int loop(int n){
	int s=1;
	for(int i=1; i<=n; i++){
	s=s*i;
	}
	return s;
}
int main() {
        int n,k,a;
	cin>>n>>k;
	a=loop(n)/(loop(n-k)*loop(k));
	if(k==0 || k==n) a=1;
	cout<<a;

return 0;
}