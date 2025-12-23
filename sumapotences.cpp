#include <iostream>
#include <cmath>
int main(){
  std::cout<<"hola este programa es solo para ver, la suma de potencias de 2 jeje, introduce un numero "<<std::endl;
  int a,b,c =0;
  std::cin>>a;
  for(int i =1; i<=a; i++){
    b = pow(2,i);
    c+=b;
  }
  std::cout<<"la suma de las potencias dio:  "<<c;
  return 0;
}
