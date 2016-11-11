#include <iostream>
using namespace std;
int main() {
        int x;
	cin>>x;
	int a=0, b=1, d=1;
	int i=1;
	
	while (x>d){
	i++;
	d=a+b;
	a=b;
	b=d;
	}
	
	if(x==d){
		cout<<i;
	} else cout<<"-1";



return 0;
}
