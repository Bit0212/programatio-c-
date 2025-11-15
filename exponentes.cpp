#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cout<<"Dame un numeraso"<<endl;
	int a;
	cin>>a;
	int b = 0;
 for( b; b<7; b++){
 int d = pow(a,b);
	cout<<a<<"^"<<b<<"="<<d<<endl;
 }
	return 0;
}