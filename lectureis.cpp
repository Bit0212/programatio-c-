#include <iostream>
#include <string>
using namespace std;
int main(){
// jeje hola amigos de youtube hoy vamos a trolear a todo el mundo con este hack para toda la familia
double a,b,d,valor=0;
string c = "Si";
double resultado =0;
while (c =="Si"){

cout<<"hola nenas soy zeus he venido a que veas tus cosillas jeje, asi que pasame el dato que quieras"<<endl;
cin>>a;
b+=1;
valor +=a;
cout<<"quieres continuar jeje (Si/No): "<<endl;
cin>>c;

if (c=="Si"){
	continue;
}
else if (c=="No"){
	break;
	
}
else{	
while (true){
	cout<<"Si o No camarada, Si o No"<<endl;
cin>>c;
if (c=="Si"){
	true;
}
if (c=="No"){

	false;
}
}

}

}
resultado = valor/b;
//cout<<"**debug only**, valor de a,b,c,resultado,valor: "<<a<<" , "<<valor<<", "<<b<<", "<<c<<"\n";
cout<<"Hola buenas jeje aqui tienes tu promedio de lo que sea que estes calculando"<<endl;
cout<<"tu resultado es: "<<resultado<<endl;

	return 0;

}

