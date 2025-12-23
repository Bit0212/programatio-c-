#include <iostream>
int main(){
  std::cout<<"Hola como estas pasame una data para saber cuanto quieres que dure todo jejej "<<std::endl;
  int b, sum =0;
  std::cin>>b;
  std::cout<<"gracias crack que comience el juego"<<std::endl;
  for(int i =1; i<=b; i++){
sum+=i;


  }
  std::cout<<"\n";
  std::cout<<sum;

  return 0;
}
