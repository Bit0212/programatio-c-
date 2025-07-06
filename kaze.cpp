#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){

string a;
int b = 0;
int c = 0;
int d = 1;
double promedio =0;
double ratea = 0;
double rateb =0;
int suma =0;
while (d==1)  {
cout<<"Hola soy el recibidor de datos de lanzamientos de monedas(Diga cara o sello)"<<endl;

cin>>a;

if (a=="Cara"){
cout<<"Salió Cara"<<endl;
b = b+1;
cout<<"quieres continuar lanzando ?(presiona 1 para si y 2 para no)"<<endl;
cin>>d;

if (d==1){
	continue;
}

else if (d==2){
break;
}
else{
	cout<<"introduce un valor valido";

}

}
else if (a=="Sello"){
cout<<"Salió Sello"<<endl;
c = c+1;

cout<<"quieres continuar lanzando ?(presiona 1 para si y 2 para no)"<<endl;
cin>>d;

if (d==1){
	continue;
}

else if (d==2){
	break;
}

}
else{
	cout<<"sea serio saludos";
}


}

suma  =b+c;

if (suma >0){

promedio = suma/2;
ratea = static_cast<double>(c)/suma;
rateb = static_cast<double>(b)/suma;

cout<<"jeje aqui tienes las stats de tus cosas jeje \n"<<"aqui tienes tu suma : "<<suma<<"\n"<<"aqui tienes tu ratio de veces de a: "<<ratea<<"\n"<<"aqui tienes tu ratio de veces b: "<<rateb<<"\n"<<"aqui tienes tu promedio de veces: ";
cout<<promedio;
}

else{
cout<<"no se realizo nada xxddxdxdxdx"<<endl;


}

return 0;


}

