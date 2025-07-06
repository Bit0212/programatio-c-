#include <iostream>
#include <string>
using namespace std;
int main(){
	cout<<"Dame un numeraso"<<endl;
	int numero;
	cin>>numero;
	int numero_de_veces =0;
	while (numero >0){
		cout<<"sigue pasando numerasos"<<endl;
		cin>>numero;
	numero_de_veces = numero_de_veces +1;
	}


cout<<"tengan cuidado es el, lo hiciste: ";
cout<<numero_de_veces;
cout<<" veces";


return 0;
}
