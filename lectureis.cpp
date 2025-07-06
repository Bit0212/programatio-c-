#include <iostream>
#include <string>
using namespace std;
int main(){
// jeje hola amigos de youtube hoy vamos a trolear a todo el mundo con este hack para toda la familia
double a,b,d,valor=0;
string c = "si";
double resultado =0;
while (c =="si"){

cout<<"hola nenas soy zeus he venido a que veas tus cosillas jeje, asi que pasame el dato que quieras"<<endl;
cin>>a;
b+=1;
valor +=a;

//if string is given//

if (cin.fail()){
cout<<"Porfavor ponga un valor con sentido"<<endl;
cin.clear();
cin.ignore(1000, '\n');
continue;
}

cout<<"quieres continuar jeje (Si/No): "<<endl;
cin>>c;
//mayus always minus//
for(size_t f =0 ; f<c.size();f++){
c[f] =tolower(c[f]);

}

if (c=="si"){
	continue;
}
else if (c=="no"){
	break;
	
}
else{	
while (c!="si"&& c!="no"){
cout<<"Si o No camarada, Si o No"<<endl;
//minus converter//
for(size_t f=0 ; f<c.size();f++){

  c[f] = tolower(c[f]);

}

cin>>c;

}

}

}
resultado = valor/b;
//cout<<"**debug only**, valor de a,b,c,resultado,valor: "<<a<<" , "<<valor<<", "<<b<<", "<<c<<"\n";
cout<<"Hola buenas jeje aqui tienes tu promedio de lo que sea que estes calculando"<<endl;
cout<<"tu resultado es: "<<resultado<<endl;

	return 0;

}

