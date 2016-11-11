#include <iostream>
#include <cmath>

using namespace std;
int main (){

    int n, x;
    cin >>n;
    int i=0; 
	while(i<=n){
	i++;

        x=(int)sqrt(i);

        if (x*x==i)
    {
         cout << i <<" ";
    }
	}
   
return 0;
}