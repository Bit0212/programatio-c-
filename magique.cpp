#include <iostream>
#include <ctime>
#include <cstdlib>
int main(){
int numeris, datui, conteur = 0;
std::srand(time(NULL));
  datui = 1+std::rand()%(100);
while(numeris!=datui){

  std::cout<<"hola crack pasame un dato jeje\n";std::cin>>numeris;
  if(numeris>datui){
    std::cout<<"\n pasame un dato menor che \n";

  }
  else{
    std::cout<<"\n Pasame un dato mayor che \n";

  }
  conteur++;
}
std::cout<<"\n le atinaste crack un saludo n\ "<<"te llevo esta cantidad de intentos"<<conteur;



  return 0;
}
