#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cout<<"Dame un numerito"<<endl;
	int a;
	cin>>a;
	if(a>=10 && a<=20){
		cout<<"Esta entre 10 y 20 cuidado gente"<<endl;
		
	}
	else{
		cout<<"No esta entre nada"<<endl;
	}
	
	int c = a%3;
	int d= a%5;
	
	 if(c==0){
		cout<<"Tu numero es multiplo de 3"<<endl;
		
	}
else{
	 cout<<"Tu numero no es multiplo de 3"<<endl;
}
	 if(d==0){
		cout<<"Tu numero es multiplo de 5"<<endl;
	}
else{
	cout<<"tu numero no es multiplo de 5"<<endl;
}

	return 0;
}