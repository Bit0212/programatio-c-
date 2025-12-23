/* escribir un programa que calcule 1*2*3*4*n */
#include <iostream>
int main(){
  int a,mul =1;
  std::cout<<"hola bienvenido al programa espero la pases bien, para comenzar pasame un numero "<<std::endl;
  std::cin>>a;
  for(int i =1; i<=a; i++){
    mul *=i;

  }
  std::cout<<mul;
  return 0;
}
