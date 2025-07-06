#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main (){
cout<<"hola aqui estamos en trustantinopla hub ahora voy a incluir todos mis programas en uno"<<endl;

int opcion;
	cout<<"hola che como andas esocoge una opcion de las que quieras sabes 1-6 sin miedo "<<endl;
	cin>>opcion;
if (opcion==1){
cout<<"contador de caracteres"<<endl;
string palabra;
cout<<"pasame una palabra jeje"<<endl;
cin>>palabra;
int resultado = palabra.length();
cout<<"Tu palabra tiene ";
cout<<resultado;
cout<<" caracteres";
}
if (opcion ==2){
	cout<<"Calculadora de sumas de enteros"<<endl;

cout<<"Pasame el entero que quieras sumar jeje: "<<endl;
double a;
cin>>a;
cout<<"ahora pasame el otro entero que solo no se suma sabes: "<<endl;
double b;
cin>>b;
double resultado = a+b;
cout<<"aqui esta tu resultado: "<<endl;
cout<<resultado;
}
if (opcion ==3){
	cout<<"Calculadora de restas de enteros: "<<endl;

cout<<"Pasame el entero que quieras restar jeje: "<<endl;
double a;
cin>>a;
cout<<"ahora pasame el otro entero que solo no se resta sabes: "<<endl;
double b;
cin>>b;
double resultado = a-b;
cout<<"aqui esta tu resultado: "<<endl;
cout<<resultado;

}
if (opcion == 4){
	cout<<"calculadora de divisiones de enteros jeje"<<endl;
cout<<"pasame el primer numero que quieras dividir(numerador): "<<endl;
double a;
cin>>a;
cout<<"pasame el segundo numero que quieras dividir(denominador): "<<endl;
double b;
cin>>b;
double resultado = a/b;
cout<<"aqui esta tu resultado jeje "<<endl;
cout<<resultado;
}

if (opcion ==5){
int respuesta;

cout<<"Hola che dime que parte te falta del triangulo(hipotenusa,cateto 1 o cateto 2 pero solo uno eh) (responde con 1,2,3): ";
cin>>respuesta;

if (respuesta== 2 ){

double a;
cout<<"Dame el valor de el cateto 1 : ";

cin>>a;
double c;
cout<<"Dame el valor de la hipotenusa : ";

cin>>c;


double proceso_1 =pow(c,2) - pow(a,2);
double proceso_2 = pow(proceso_1,0.5);

cout<<"aquí tienes tu cateto 2"<<endl;
cout<<proceso_2;
}

if (respuesta== 1 ){

double b;
cout<<"Dame el valor de el cateto 2 : ";

cin>>b;
double c;
cout<<"Dame el valor de la hipotenusa : ";

cin>>c;


double proceso_1 =pow(c,2) - pow(b,2);
double proceso_2 = pow(proceso_1,0.5);

cout<<"aquí tienes tu cateto 1"<<endl;
cout<<proceso_2;
}

if (respuesta == 3 ){

double a;
cout<<"Dame el valor de el cateto 1: ";

cin>>a;
double b;
cout<<"Dame el valor de el cateto 2: ";

cin>>b;


double proceso_1 =pow(a,2)+pow(b,2);
double proceso_2 = pow(proceso_1,0.5);

cout<<"aquí tienes tu hipotenusa"<<endl;
cout<<proceso_2;int respuesta;

cout<<"Hola che dime que parte te falta del triangulo(hipotenusa,cateto 1 o cateto 2 pero solo uno eh) (responde con 1,2,3): ";
cin>>respuesta;

if (respuesta== 2 ){

double a;
cout<<"Dame el valor de el cateto 1 : ";

cin>>a;
double c;
cout<<"Dame el valor de la hipotenusa : ";

cin>>c;


double proceso_1 =pow(c,2) - pow(a,2);
double proceso_2 = pow(proceso_1,0.5);

cout<<"aquí tienes tu cateto 2"<<endl;
cout<<proceso_2;
}
}

if (opcion ==6){
	cout<<"hola plebes pasa un numero y te lleva a lo que quieras resolver(1,2)"<<endl;
int opcion;
cin>>opcion;
if(opcion==1){
cout<<"Hola rey pasame la ecuacion"<<endl;
cout<<"recuerda que me tienes que pasar en base a la forma ax+b=c"<<endl;
cout<<"primero pasame la a"<<endl;
double a;
cin>>a;

double b;
cout<<"pasame la b"<<endl;
cin>>b;

double c;
cout<<"pasame la c"<<endl;
cin>>c;
double resultado_part1 = c-b;
double resultado_part2 = resultado_part1/a;
cout<<"bueno pues tu x es: "<<endl;
cout<<resultado_part2<<endl;
}
else{
cout<<"Sea serio no se pase de chistoso"<<endl;
}
if(opcion==2){
cout<<"completation d'equations quadratiques"<<endl;
//recordar eh ax^2+bx+c = d
cout<<"pasame a"<<endl;
double a;
cin>>a;
cout<<"pasame b"<<endl;
double b;
cin>>b;
cout<<"pasame c"<<endl;
double c;
cin>>c;
double resultado_raiz=pow(b,2)-4*a*c;
double resultado_full_1=-b+resultado_raiz/2*a;
double resultado_full_2=-b-resultado_raiz/2*a;
cout<<"jeje aqui tienes tus resultados"<<endl;
cout<<"tus soluciones son: ";
cout<<resultado_full_1;
cout<<", ";
cout<<resultado_full_2;

}
}
else{
	cout<<"sea serio no hay vida"<<endl;
}
}
return 0;
}
