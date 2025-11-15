#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double producto,descuento,aplicado;
	cout<<"Hola buenas dame el precio de tu producto: \n";cin>>producto;
	const double iva = 0.1;
	descuento = producto*iva;
	aplicado = producto-descuento;
	cout<<"Hola aqui esta tu descuento aplicado jeje y aqui tu descuento: "<<endl;
	cout<<descuento;cout<<", ";cout<<aplicado<<endl;
	return 0;
}