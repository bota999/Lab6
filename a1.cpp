#include <iostream>

using namespace std;

        int Min(int a, int b, int c, int d){
		int x=min(a, min(b,min(c,d)));
	
	return x;
	}
	
	int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int n=Min(a,b,c,d);
	
	cout<<n;

return 0;
}